from numpy import record
from pydantic import BaseModel
from lark import Transformer, v_args
import abc
from typing import Union
from __future__ import annotations
from dataclasses import dataclass

#Need to decide how to resolve options
#At this stage, options could be resolved for each access rule into the option-rooted structure previously described
#that's probably not happening in this class though
class CppOperation(metaclass = abc.ABCMeta):
    @abc.abstractmethod
    def simplify(self) -> CppOperation:
        return self

    def transform(self, transforms: dict[CppOperation, callable[[CppOperation], CppOperation]]):
        if self in transforms.keys:
            return transforms[self](self)
        return self

CppOperation.register(bool)
CppOperation.register(str)
CppOperation.register(int)
CppOperation.register(float)

type Primitive = Union[bool, str, int, float]

@dataclass
class OrOp(CppOperation):
    operands: list[CppOperation]
    def simplify(self) -> CppOperation:
        for i in range(len(self.operands)):
            self.operands[i] = self.operands[i].simplify()
        for op in self.operands:
            if op == True:
                return True
        return self

@dataclass
class AndOp(CppOperation):
    operands: list[CppOperation]
    def simplify(self) -> CppOperation:
        for i in range(len(self.operands)):
            self.operands[i] = self.operands[i].simplify()
        for op in self.operands:
            if op.simplify() == False:
                return False
        return self

@dataclass
class NotOp(CppOperation):
    operand: CppOperation
    def simplify(self) -> CppOperation:
        self.operand = self.operand.simplify()
        if isinstance(self.operand.simplify(), bool):
            return not self.operand
        return self

@dataclass
class EqOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left == self.right
        return self

@dataclass
class LessOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left < self.right
        return self
    
@dataclass
class GreaterOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left > self.right
        return self

@dataclass
class AddOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left + self.right
        return self

@dataclass
class SubOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left - self.right
        return self

@dataclass
class MultOp(CppOperation):
    operands: list[CppOperation]
    def simplify(self) -> CppOperation:
        for i in range(len(self.operands)):
            self.operands[i] = self.operands[i].simplify()
            #Quick short-circuit
            if self.operands[i] == 0:
                return 0
        prod = self.operands[0]
        if isinstance(prod, Primitive):
            while type(prod) == type(self.operands[1]):
                prod *= self.operands[1]
                self.operands.remove(self.operands[0])
            self.operands[0] = prod
        if len(self.operands) == 1:
            return self.operands[0]
        return self

@dataclass
class DivOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left / self.right
        return self

@dataclass
class ModOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, Primitive):
            return self.left % self.right
        return self

@dataclass
class LeftShiftOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, int):
            return self.left << self.right
        return self

@dataclass
class RightShiftOp(CppOperation):
    left: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        if isinstance(self.left, Primitive) and isinstance(self.right, int):
            return self.left >> self.right
        return self
    
@dataclass
class TernaryOp(CppOperation):
    left: CppOperation
    middle: CppOperation
    right: CppOperation
    def simplify(self) -> CppOperation:
        self.left = self.left.simplify()
        self.right = self.right.simplify()
        self.middle = self.middle.simplify()
        if isinstance(self.left, bool):
            if self.left:
                return self.middle
            return self.right
        return self

class CppTransform(Transformer):
    op_or = lambda self, s: OrOp(s)
    op_and = lambda self, s: AndOp(s)
    op_not = v_args(inline=True)(lambda self, s: NotOp(s))
    eq = v_args(inline=True)(lambda self, l, r: EqOp(l, r))
    ge = v_args(inline=True)(lambda self, l, r: NotOp(LessOp(l, r)))
    le = v_args(inline=True)(lambda self, l, r: NotOp(GreaterOp(l, r)))
    less = v_args(inline=True)(lambda self, l, r: LessOp(l, r))
    greater = v_args(inline=True)(lambda self, l, r: GreaterOp(l, r))
    add = v_args(inline=True)(lambda self, l, r: AddOp(l, r))
    sub = v_args(inline=True)(lambda self, l, r: SubOp(l, r))
    mul = lambda self, s: MultOp(s)
    div = v_args(inline=True)(lambda self, l, r: DivOp(l, r))
    mod = v_args(inline=True)(lambda self, l, r: ModOp(l, r))
    leftshift = v_args(inline=True)(lambda self, l, r: LeftShiftOp(l, r))
    rightshift = v_args(inline=True)(lambda self, l, r: RightShiftOp(l, r))
    ternary = v_args(inline=True)(lambda self, l, m, r: TernaryOp(l, m, r))
    integer = int
    number = float
    hex_num = v_args(inline=True)(lambda self, s: int(s[2:], 16))
    bin_num = v_args(inline=True)(lambda self, s: int(s[2:], 2))
    string = lambda self, s: s[1:-1] #trim the text
    true = lambda self, s: True
    false = lambda self, s: False
    