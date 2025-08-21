parser grammar LogicFileParser;

options{
    tokenVocab=LogicFileLexer;
}

fileDef: (logicDef | optionsDef | enumDef | EOL+)+;

enumDef: EnumDecPrefix Ident OBkt EOL* enumVals+ CBkt;
enumVals: (Ident Comma? EOL+)+;

ifBlock: IfPrefix OPar expr CPar EOL* OBkt EOL* expr EOL* CBkt EOL* ifContinuation?;
ifContinuation: EOL* (elseBlock | elseIfBlock);
elseIfBlock: ElseIfPrefix OPar expr CPar EOL* OBkt EOL* expr CBkt EOL* ifContinuation?;
elseBlock: ElsePrefix EOL* OBkt EOL* expr EOL* CBkt EOL*;

switchExpr: SwitchPrefix expr return_case? EOL* OBkt EOL* caseList EOL* CBkt EOL*;
return_case: SwitchReturnsKW Bool;
caseList: (caseDef | defaultCase)+;
caseDef: SwitchCaseKW value Colon EOL* (expr EOL+)?;
defaultCase:  SwitchDefaultKW Colon EOL* expr EOL+;

args: (arg (Comma arg EOL*)*)?;
arg: (Ident ArgAssign)? (expr | Ident);

helperDef: HelperPrefix Ident OPar args CPar Colon? EOL* OBkt EOL* expr EOL* CBkt EOL*;

quantityDef: QuantityPrefix expr;
logicValSet: LogicValSetPrefix Ident;
nameDef: NamePrefix EscapedString;
classificationDef: ClassPrefix Classification;
itemDef: ItemDefPrefix Ident Colon? EOL* OBkt EOL* ((logicValSet | nameDef | classificationDef | quantityDef) EOL+)+ EOL* CBkt EOL*;

presentWhenDef: PresentWhenPrefix expr;
ruleDef: RulePrefix expr;
destDef: DestPrefix Ident;
entranceDef: EntranceDefPrefix Ident Colon? EOL* OBkt EOL* ((presentWhenDef | ruleDef | destDef | CantCrossAdult | CantCrossChild) EOL+)+ CBkt;

locationDef: LocationPrefix Ident Colon? EOL* OBkt EOL* ((nameDef | ruleDef | LocClassDef | ruleDef | presentWhenDef) EOL+)+ CBkt;
eventDef: EventDefPrefix Ident? Colon expr;

regionDef: RegionDefPrefix Ident Colon? EOL* OBkt EOL* ((nameDef | locationDef | entranceDef | eventDef | presentWhenDef) EOL+)+ CBkt;

logicDef: LogicPrefix Colon? EOL* OBkt EOL* ((regionDef | itemDef | helperDef) EOL+)+ CBkt;

optionsDef: OptionsDefPrefix EOL* OBkt EOL* ((optionDefStrings | optionDefIntRange | optionDefIntList | optionDefFloatRange | optionDefFloatList | optionDefInt | optionDefFloat | optionDefString) EOL+)+ CBkt;
optionDefStrings: OptionPrefix StringsPrefix Ident Colon?  OBkt (EscapedString (ListSeparator EscapedString)*)? CBkt;
optionDefString: OptionPrefix StringPrefix Ident Colon? EscapedString;
optionDefIntList: OptionPrefix IntsPrefix Ident Colon?  OBkt (SignedInt (ListSeparator SignedInt))? CBkt;
optionDefIntRange: OptionPrefix IntsPrefix Ident Colon?  OBkt MinKW Colon SignedInt ListSeparator MaxKW Colon SignedInt  CBkt;
optionDefInt: OptionPrefix IntPrefix Ident Colon SignedInt;
optionDefFloatList: OptionPrefix FloatsPrefix Ident Colon?  OBkt (SignedNumber (ListSeparator SignedNumber)*)? CBkt;
optionDefFloatRange: OptionPrefix FloatsPrefix Ident Colon?  OBkt MinKW Colon SignedNumber ListSeparator MaxKW Colon SignedNumber CBkt;
optionDefFloat: OptionPrefix FloatPrefix Ident Colon SignedNumber;
optionDefBool: OptionPrefix BoolPrefix Ident Colon Bool; //should I put the space back in these, since it's strictly required

expr: basefunc #baseFunc
    | prefix = NotSymbol expr #notOperator
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
arg_pass: (Ident EqSymbol)? (expr | Ident);
args_pass: arg_pass (Comma arg_pass)*;
optionCheck: OptionCheckKW Ident;
helperCall: HelperCallKW Ident OPar args_pass CPar;
argCheck: ArgCheckKW Ident;
logicValCheck: LogicValCheckKW Ident;
eventCheck: EventCheckKW Ident;
canReachLocCall: CanReachLocKW OPar Ident (Comma Age)? CPar;
canReachEntranceCall: CanReachEntranceKW OPar Ident (Comma Age)? CPar;
canReachRegionCall: CanReachRegionKW OPar Ident (Comma Age)?CPar;
hasItemCall: HasItemKW OPar Ident CPar;
countItemCall: CountItemKW OPar Ident CPar;
isDungeonMqCall: IsMQDungeonKW OPar Ident CPar;
floorCall: FloorKW OPar Ident CPar;
ceilCall: CeilKW OPar Ident CPar;

value: parenExpr | Bool | SignedNumber | enumValueRef | entranceRef | regionRef | locRef | itemRef | EscapedString;
parenExpr: OPar expr CPar;
enumValueRef: Ident Colon Ident;
entranceRef: EntranceRefKW Ident;
regionRef: RegionRefKW Ident;
locRef: LocRefKW Ident;
itemRef: ItemRefKW Ident;