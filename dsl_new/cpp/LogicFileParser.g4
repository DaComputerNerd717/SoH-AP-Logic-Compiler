parser grammar LogicFileParser;

options{
    tokenVocab=LogicFileLexer;
}

enumDef: EnumDecPrefix Ident OBkt CBkt;
enumVals: (Ident Comma? EOL)+;

ifBlock: IfPrefix expr CPar AnyWS? OBkt expr CBkt ifContinuation?;
ifContinuation: elseBlock | elseIfBlock;
elseIfBlock: ElseIfPrefix expr CPar AnyWS? OBkt expr CBkt ifContinuation?;
elseBlock: ElsePrefix expr CBkt;

switchExpr: SwitchPrefix expr return_case? OBkt caseList CBkt;
return_case: SwitchReturnsKW Bool;
caseList: (caseDef | defaultCase)+;
caseDef: SwitchCaseKW value Colon EOL? expr EOL;
defaultCase:  SwitchDefaultKW Colon EOL? expr EOL;

args: (arg (Comma D? arg)*)?;
arg: (Ident ArgAssign)? (expr | Ident);

helperDef: HelperPrefix Ident OPar args CPar Colon? AnyWS? OBkt AnyWS? expr AnyWS? CBkt;
quantityDef: QuantityPrefix expr;
logicValSet: LogicValSetPrefix Ident;
nameDef: NamePrefix EscapedString;
classificationDef: ClassPrefix Classification;
itemDef: ItemDefPrefix Ident Colon? AnyWS? OBkt (logicValSet | nameDef | classificationDef | quantityDef | AnyWS)+ CBkt;

presentWhenDef: PresentWhenPrefix expr;
ruleDef: RulePrefix expr;
destDef: DestPrefix Ident;
entranceDef: EntranceDefPrefix Ident Colon? AnyWS? OBkt (presentWhenDef | ruleDef | destDef | CantCrossAdult | CantCrossChild | AnyWS)+ CBkt;


locationDef: LocationPrefix Ident Colon? AnyWS? OBkt (nameDef | ruleDef | LocClassDef | ruleDef | presentWhenDef | AnyWS)+ CBkt;
eventDef: EventDefPrefix Ident D? Colon AnyWS? expr;

regionDef: RegionDefPrefix Ident Colon? AnyWS? OBkt (nameDef | locationDef | entranceDef | eventDef | presentWhenDef | AnyWS)+ CBkt;

logicDef: LogicPrefix Colon? AnyWS? OBkt (regionDef | itemDef | helperDef | AnyWS)+ CBkt;

optionsDef: OptionsDefPrefix (optionDefStrings | optionDefIntRange | optionDefIntList | optionDefFloatRange | optionDefFloatList | optionDefInt | optionDefFloat | optionDefString | AnyWS)+ CBkt;
optionDefStrings: OptionStringsPrefix Ident Colon? AnyWS? OBkt (EscapedString (ListSeparator EscapedString)*)? CBkt; 
optionDefString: OptionStringPrefix Ident Colon? EscapedString;
optionDefIntList: OptionIntsPrefix Ident Colon? AnyWS? OBkt (SignedInt (ListSeparator SignedInt))? CBkt;
optionDefIntRange: OptionIntsPrefix Ident Colon? AnyWS? OBkt MinKW Colon SignedInt ListSeparator MaxKW Colon SignedInt AnyWS? CBkt;
optionDefInt: OptionIntPrefix Ident Colon SignedInt;
optionDefFloatList: OptionFloatsPrefix Ident Colon? AnyWS? OBkt (SignedNumber (ListSeparator SignedNumber)*)? CBkt;
optionDefFloatRange: OptionFloatsPrefix Ident Colon? AnyWS? OBkt MinKW Colon SignedNumber ListSeparator MaxKW Colon SignedNumber AnyWS? CBkt;
optionDefFloat: OptionFloatPrefix Ident Colon SignedNumber;
optionDefBool: OptionBoolPrefix Ident Colon Bool;

fileDef: (logicDef | optionsDef | enumDef | AnyWS)+;

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
canReachLocCall: CanReachLocKW OPar Ident (Comma D? Age)?CPar;
canReachEntranceCall: CanReachEntranceKW OPar Ident (Comma D? Age)? CPar;
canReachRegionCall: CanReachRegionKW OPar Ident (Comma D? Age)?CPar;
hasItemCall: HasItemKW OPar Ident CPar;
countItemCall: CountItemKW OPar Ident CPar;
isDungeonMqCall: IsMQDungeonKW OPar Ident CPar;
floorCall: FloorKW OPar Ident CPar;
ceilCall: CeilKW OPar Ident CPar;

value: parenExpr | Bool | SignedNumber | enumValueRef | entranceRef | regionRef | locRef | itemRef;
parenExpr: OPar expr CPar;
enumValueRef: Ident Colon Ident;
entranceRef: EntranceRefKW Ident;
regionRef: RegionRefKW Ident;
locRef: LocRefKW Ident;
itemRef: ItemRefKW Ident;