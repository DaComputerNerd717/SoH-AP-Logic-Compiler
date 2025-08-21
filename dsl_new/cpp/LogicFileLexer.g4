lexer grammar LogicFileLexer;

Comment: '//' ~[\r\n]* -> skip;
MLComment: '/*' .*? '*/' -> skip;


Bool: 'true' | 'false';
Age: 'adult' | 'child' | 'both';
Dot: '.';
SignedNumber: '-'? [0-9]* Dot? [0-9]+;
SignedInt: ('-'? [0-9]* [1-9]) | '-'? '0';
EscapedString: '"' ('\\"' | ~'"')* '"';

EnumDecPrefix: 'enum';

OBkt: '{';
CBkt: '}';
OPar: '(';
CPar: ')';
Comma: ',';


OrSymbol: ' or ' | '||';
AndSymbol: ' and ' | '&&';
NotSymbol: 'not ' | '!';
NeqSymbol: '!=';
EqSymbol: '==';
GeqSymbol: '>=';
LeqSymbol: '<=';
LeSymbol: '<';
GeSymbol: '>';
AddSymbol: '+';
SubSymbol: '-';
MulSymbol: '*';
DivSymbol: '/';
ModSymbol: '%';
RSSymbol: '>>';
LSSymbol: '<<';
Question: '?';


ArgAssign: '=';

OptionCheckKW: [oO]'ption' 's'? '.';
HelperCallKW: [hH]'elper' 's'? '.';
ArgCheckKW: [aA]'rg' 's'? '.';
LogicValCheckKW: [lL]'ogic' '_'? [vV]'al' 's'? '.';
EventCheckKW: [eE]'vent' 's'? '.';
CanReachLocKW: [cC]'anReachLocation' | 'can_reach_location';
CanReachEntranceKW:
	[cC]'anReachEntrance'
	| 'can_reach_entrance';
CanReachRegionKW: [cC]'anReachRegion' | 'can_reach_region';
HasItemKW: [hH]'asItem' | 'has_item';
CountItemKW: [cC]'ountItem' | 'count_item';
IsMQDungeonKW: [iI]'sDungeonMQ' | 'is_dungeon_mq';
FloorKW: 'floor';
CeilKW: 'ceil';
EntranceRefKW: 'entrance' 's'? '.';
RegionRefKW: 'region' 's'? '.';
LocRefKW: 'location' 's'? '.';
ItemRefKW: 'item' 's'? '.';

IfPrefix: 'if';
ElseIfPrefix: 'else' 'if';
ElsePrefix: 'else';

SwitchPrefix: 'switch';
SwitchCaseKW: 'case';
fragment DefaultKW: 'default';
SwitchDefaultKW: DefaultKW;
SwitchReturnsKW: 'yields ';
EOL: [\r\n]+;
WS: [ \t]+ -> skip;

HelperPrefix: 'helper';
QuantityPrefix: 'quantity' ':';
LogicValSetPrefix: 'logic' '_'? [vV] 'al' ':';
NamePrefix: 'name' ':';
ClassPrefix: 'classification' ':';
Classification:
	'useful'
	| 'junk'
	| 'trap'
	| 'skip-balancing'
	| 'skipBalancing'
	| 'deprioritized';
ItemDefPrefix: 'item ';

PresentWhenPrefix: ('presentWhen' | 'present_when') Colon;
RulePrefix: 'rule' Colon;
DestPrefix: (
		'destinationId'
		| 'destination_id'
		| 'destId'
		| 'dest_id'
	) Colon;
CantCrossChild: 'childCantCross' | 'child_cant_cross';
CantCrossAdult: 'adultCantCross' | 'adult_cant_cross';
EntranceDefPrefix: 'entrance';

LocClassDef: DefaultKW | 'priority' | 'excluded';
LocationPrefix: 'location';

EventDefPrefix: 'event';

RegionDefPrefix: 'region';

LogicPrefix: 'logic';

OptionsDefPrefix: 'options';
OptionPrefix: 'option';
StringsPrefix: 'strings';
StringPrefix: 'string';
IntsPrefix: 'ints';
IntPrefix: 'int';
FloatsPrefix: 'floats';
FloatPrefix: 'float';
BoolPrefix: 'bool';
MinKW: 'min';
MaxKW: 'max';
ListSeparator: Comma | (Comma? EOL);

Ident: [A-Za-z_][A-Za-z0-9_-]* [A-Za-z0-9_]?;
Colon: ':';