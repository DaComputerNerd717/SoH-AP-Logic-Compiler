parser grammar LogicFileParser;

options{
    tokenVocab=LogicFileLexer;
}

enum: 'enum ' Ident '{' '}';
enumVals: (Ident ','? EOL)+;

ifBlock: IfPrefix expr ')' (WS | EOL)* '{' expr '}' ifContinuation?;
ifContinuation: elseBlock | elseIfBlock;
elseIfBlock: ElseIfPrefix expr ')' (WS | EOL)* '{' expr '}' ifContinuation?;
elseBlock: ElsePrefix expr '}';

switchExpr: 'switch ' expr return_case? '{' caseList '}';
return_case: 'yields ' Bool;
caseList: (case | defaultCase)+;
case: 'case ' value Colon EOL? expr EOL;
defaultCase:  SwitchDefaultKW Colon EOL? expr EOL;

args: (arg (',' ' '? arg)*)?;
arg: (Ident '=')? (expr | Ident);

helperDef: HelperPrefix Ident '(' args ')' Colon? AnyWS? '{' AnyWS? expr AnyWS? '}';
quantityDef: QuantityPrefix expr;
logicValSet: LogicValSetPrefix Ident;
nameDef: NamePrefix EscapedString;
classificationDef: ClassPrefix Classification;
itemDef: ItemDefPrefix Ident Colon? AnyWS? '{' (logicValSet | nameDef | classificationDef | quantityDef | AnyWS)+ '}';

presentWhenDef: PresentWhenPrefix expr;
ruleDef: RulePrefix expr;
destDef: DestPrefix Ident;
entranceDef: EntranceDefPrefix Ident Colon? AnyWS? '{' (presentWhenDef | ruleDef | destDef | CantCrossAdult | CantCrossChild | AnyWS)+ '}';


locationDef: LocationPrefix Ident Colon? AnyWS? '{' (nameDef | ruleDef | LocClassDef | ruleDef | presentWhenDef | AnyWS)+ '}';
eventDef: EventDefPrefix Ident ' '? Colon AnyWS? expr;

regionDef: RegionDefPrefix Ident Colon? AnyWS? '{' (nameDef | locationDef | entranceDef | eventDef | presentWhenDef | AnyWS)+ '}';

logicDef: LogicPrefix Colon? AnyWS? '{' (regionDef | itemDef | helperDef | AnyWS)+ '}';

optionsDef: OptionsDefPrefix (optionDefStrings | optionDefIntRange | optionDefIntList | optionDefFloatRange | optionDefFloatList | optionDefInt | optionDefFloat | optionDefString | AnyWS)+ '}';
optionDefStrings: 'option strings ' Ident Colon? AnyWS? '{' (EscapedString (ListSeparator EscapedString)*)? '}'; 
optionDefString: 'option string ' Ident Colon? EscapedString;
optionDefIntList: 'option ints ' Ident Colon? AnyWS? '{' (SignedInt (ListSeparator SignedInt))? '}';
optionDefIntRange: 'option ints ' Ident Colon? AnyWS? '{' 'min' Colon SignedInt ListSeparator 'max' Colon SignedInt AnyWS? '}';
optionDefInt: 'option int ' Ident Colon SignedInt;
optionDefFloatList: 'option floats ' Ident Colon? AnyWS? '{' (SignedNumber (ListSeparator SignedNumber)*)? '}';
optionDefFloatRange: 'option floats ' Ident Colon? AnyWS? '{' 'min' Colon SignedNumber ListSeparator 'max' Colon SignedNumber AnyWS? '}';
optionDefFloat: 'option float ' Ident Colon SignedNumber;
optionDefBool: 'option bool ' Ident Colon Bool;

file: (logicDef | optionsDef | enum | AnyWS)+;

expr: basefunc #baseFunc
    | prefix = NotSymbol value #notOperator
    | <assoc=left> left = expr op = MulSymbol right = expr #mulOperator
    | <assoc=left> left = expr op = DivSymbol right = expr #divOperator
    | <assoc=left> left = expr op = ModSymbol right = expr #modOperator
    | <assoc=left> left = expr op = AddSymbol right = expr #addOperator
    | <assoc=left> left = expr op = SubSymbol right = expr #subOperator
    | <assoc=left> left = expr op = LSSymbol right = expr #leftShiftOperator
    | <assoc=left> left = expr op = RSSymbol right = expr #rightShiftOperator
    | <assoc=left> left = expr op = LeSymbol right = expr #leOperator
    | <assoc=left> left = expr op = GeSymbol right = expr #geOperator
    | <assoc=left> left = expr op = GeqSymbol right = expr #geqOperator
    | <assoc=left> left = expr op = LeqSymbol right = expr #leqOperator
    | <assoc=left> left = expr op = NeqSymbol right = expr #neqOperator 
    | <assoc=left> left = expr op = EqSymbol right = expr #eqOperator
    | <assoc=left> left = expr op = OrSymbol right = expr #orOperator
    | <assoc=left> left = expr op = AndSymbol right = expr #andOperator
    | <assoc=right> left = expr op = Question right = expr Colon expr #ternaryOperator;

basefunc: optionCheck | helperCall | argCheck | logicValCheck | eventCheck | canReachLocCall | canReachEntranceCall | canReachRegionCall | hasItemCall | countItemCall | isDungeonMqCall | floorCall | ceilCall | switchExpr | ifBlock | value;
optionCheck: OptionCheckKW Ident;
helperCall: HelperCallKW Ident;
argCheck: ArgCheckKW Ident;
logicValCheck: LogicValCheckKW Ident;
eventCheck: EventCheckKW Ident;
canReachLocCall: CanReachLocKW '(' Ident (',' ' '? Age)?')';
canReachEntranceCall: CanReachEntranceKW '(' Ident (',' ' '? Age)? ')';
canReachRegionCall: CanReachRegionKW '(' Ident (',' ' '? Age)?')';
hasItemCall: HasItemKW '(' Ident ')';
countItemCall: CountItemKW '(' Ident ')';
isDungeonMqCall: IsMQDungeonKW '(' Ident ')';
floorCall: FloorKW '(' Ident ')';
ceilCall: CeilKW '(' Ident ')';

value: parenExpr | Bool | SignedNumber | enumValueRef | entranceRef | regionRef | locRef | itemRef;
parenExpr: '(' expr ')';
enumValueRef: Ident ':' Ident;
entranceRef: EntranceRefKW Ident;
regionRef: RegionRefKW Ident;
locRef: LocRefKW Ident;
itemRef: ItemRefKW Ident;

