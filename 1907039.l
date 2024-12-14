%{
	#include"1907039.tab.h"
	using namespace std;
	int varcnt = 0;
	int stmntcnt = 0;
	int headercnt = 0;
	int singlecommentcnt = 0;
	int multicommentcnt = 0;
	int printstmntcnt = 0;
	char s[10000];

	// a b c d e message, f, sum, i, multiline, names, index 
	
	int ifcnt = 0;
	int forcnt = 0;
	int keycnt = 0;
%}

ID [a-zA-Z][a-zA-Z0-9]*[_]?[a-zA-Z0-9]*
WHOLENUMBER [+-]?[0-9]+
FRACTIONNUMBER [+-]?[0-9]+[.][0-9]+
STRINGLITERAL \"[^\"]*\"
header	"AMDANI"[ ]+[^\n]+[.h][ ]*[\n]
BINARYOPERATOR  "JOG"|"BIYOG"|"GUNN"|"BHAGG"|"BHAGGSHES"|"SUCHOK"|"="
UNARYOPERATOR "BARBEI"|"KOMBEI"|"POROMMAN"
BITWISEOPERATOR "!"|"&"|"|"
LOGICALOPERATOR "&&"|"||"
RELATIONALOPERATOR "HOCCHECHOTO"|"HOCCHEBORO"|"SOMAN"|"CHOTObaSOMAN"|"BORObaSOMAN"|"SOMANNOY"
KEYWORD "PURNO"|"VOGNO"|"SOBDO"|"SHARI"|"JOTOKHON"|"GHURO"|"JODI"|"NAHOLE"|"JODINA"|"TOBE"|"DEKHAW"|"LIKHO"|"NOTE"
NUMBERKEYWORD "PURNO"|"VOGNO"
STRINGKEYWORD "SOBDO"
IFORIFELSE "JODI"|"JODINA"|"NAHOLE"|"TOBE"
VALUES {WHOLENUMBER}|{FRACTIONNUMBER}
LKEYWORD {NUMBERKEYWORD}|{MKEYWORD}
IDOFINDEX {ID}[ ]*\[[ ]*{ID}[ ]*\]
IDORNUMBER {ID}|{VALUES}|{STRINGLITERAL}|{IDOFINDEX}
NEWVALUES {VALUES}|{STRINGLITERAL}
UNARYOPERATION {ID}[ ]*{UNARYOPERATOR}|{UNARYOPERATOR}[ ]*{ID}
CONDITIONITIS "("?[ ]*{IDORNUMBER}[ ]+{OPERATOR}[ ]+{IDORNUMBER}[ ]*")"?
INITIAZITION   ({NUMBERKEYWORD}[ ]+)?{ID}[ ]*=[ ]*{VALUES}([ ]*,{ID}[ ]*=[ ]*{VALUES})*
OPERATION ({ID}[ ]*=[ ]*{IDORNUMBER}([ ]*{OPERATOR}[ ]*{IDORNUMBER}[ ]*)*)|{UNARYOPERATION}

%%
"STARTMAIN" { return STARTMAIN; }
"ENDMAIN" { return ENDMAIN; }
"START" { return STARTOFFUNCTION; }
"END" { return ENDOFFUNCTION; }
{header} { return HEADER; }
"JOG" { return JOG; }
"BIYOG" { return BIYOG; }
"GUNN" { return GUNN; }
"BHAGG" { return BHAGG; }
"BHAGGSHES" { return BHAGGSHES; }
"SUCHOK" { return SUCHOK; }
"BARBEI" { return BARBEI; }
"KOMBEI" { return KOMBEI; }
"POROMMAN" { return POROMMAN; }
"RETURN" { return RETURN; }
"PURNO" {
	//printf("int");
	yylval.varType = strdup("PURNO");
	return PURNO; 
	}
"VOGNO" {
	//	printf("float");
	yylval.varType = strdup("VOGNO");
	return VOGNO; 
}
"SOBDO" { 
	yylval.varType = strdup("VOGNO"); 
	return SOBDO; 
}
"SHARI::" { 
	yylval.varType = strdup("SHARI"); 
	return SHARI; 
}
"LAFAW" { return LAFAW;}
"KOKHONO" { return KOKHONO; }
"VANGO" { return VANGO; }
"CHOLO" { return CHOLO; }
"NORMALLY" { return NORMALLY; }
"!" { return NOT; }
"&" { return AND; }
"|" { return OR; }
"&&" { return ANDAND; }
"||" { return OROR; }
"FACT" { return FACT; }
"LEAPYEAR" { return LEAPYEAR; }
"SQRT" { return SQRT; }
"GCD" { return GCD; }
"LCM" { return LCM; }
"MAX" { return MAX; }
"MIN" { return MIN; }
"PRIME" { return PRIME; }
"HOCCHECHOTO" { return LESS; }
"HOCCHEBORO" { return GREATER; }
"SOMAN" { return EQ; }
"CHOTObaSOMAN" { return LEQ; }
"BORObaSOMAN" { return GEQ; }
"SOMANNOY" { return NEQ; }
"JOTOKHON" { return JOTOKHON; }
"GHURO" { return GHURO; }
"RANGE" { return RANGE; }
"FROM"	{return FROM; }
"JODI" { return JODI; }
"NAHOLE" { return NAHOLE; }
"JODINA" { return JODINA; }
"TOBE" { return TOBE; }
"DEKHAW" { return DEKHAW; }
"LIKHO" { return LIKHO; }
"OBOSSHOIKORO" { return OBOSSHOIKORO; }
"[" { return LPAREN; }
"]" { return RPAREN; }
"\[{IDORNUMBER}\]" { return AINDEX; }
"{" { return LBRACE; }
"}" { return RBRACE; }
"(" {return LFIRST;}  
")" {return RFIRST;}

"\<{WHOLENUMBER}\>" { return WHOLENUMBER; }
{ID} {  
	//printf("variable %s",yytext);
	yylval.varType = strdup(yytext); 
	return ID;
}
{WHOLENUMBER} { 
	//sscanf(yytext,"%lf",&yylval.intVal);
	yylval.intVal = atoi(yytext); 
	return WHOLENUMBER; 
}
{FRACTIONNUMBER} {
	sscanf(yytext,"%lf",&yylval.floatVal);
	return FRACTIONNUMBER; 
}
{STRINGLITERAL} {
	yylval.stringVal = strdup(yytext);
	return STRINGLITERAL; 
}
"=" { return ASSIGN; }
";" { 	//printf("semicolon");
 	return SEMICOLON; 
	}
"," { return COMMA; }
[ ] {}
[:] {return SURU; }
"NOTE"(.)*"\n" { printf("comments found\n"); /* ignore comments */ }
"NOTE"[\*](.*|\n)*[\*]"NOTE" { printf("comments found\n"); }
. { printf("INVALID_CHARACTER: %s\n", yytext); }

%%

int yywrap(){
	return 1;
}