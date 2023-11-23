%{
	#include <bits/stdc++.h>
    using namespace std;
    
    int yylex();
    int yywrap();
    int yyerror(const char* s);

    vector<string> var(500);
    // vector<int> record_int(500);
    // vector<double> record_double(500);
    map<string, int> varIndex;
    map<string, int> varValue;

    map<string, int> varFunction;

    map<int, int> alreadyDeclared;
    vector<string>vemp;
    int maincase,subcase;
    // double dmaincase, dsubcase;

    int i, temp=0, aisize=0, adsize=0;
    int var_exist(const char* v) {
        auto it = varIndex.find(v);
        if (it != varIndex.end()) {
            return it->second;
        }
        return -1;
    }

    int func_exist(const char* v) {
        if(!varFunction[v])
            return 1;
        else 
            return 0;
    }
    int func_assign(const char* v){
        varFunction[v] = 1;
    }

    // vector<string> variable;
    // vector<int> store;
    // int last_point = 1, f = 1;
    // int cdefault = 0, var = 0;
    // vector<string> param;
    // int cnt_func = 1;
    // int conditionMatched;

    // int func_present_or_not(const string& s) {
    //     auto it = find(param.begin(), param.end(), s);
    //     return (it != param.end());
    // }

    // int assign_func(const string& s) {
    //     param.push_back(s);
    //     cnt_func++;
    //     return 1;
    // }

    // int isdeclared(const string& s) {
    //     auto it = find(variable.begin(), variable.end(), s);
    //     return (it != variable.end());
    // }
    
    // int assign(const string& s) {
    //     if (isdeclared(s) == 1)
    //         return 0;
    //     variable.push_back(s);
    //     store.push_back(0);
    //     last_point++;
    //     return 1;
    // }
    // int setval(const string& s, int val) {
    //     if (isdeclared(s) == 0)
    //         return 0;
    //     auto it = find(variable.begin(), variable.end(), s);
    //     int ok = distance(variable.begin(), it);
    //     store[ok] = val;
    //     return 1;
    // }

    // int getval(const string& s) {
    //     auto it = find(variable.begin(), variable.end(), s);
    //     return (it != variable.end()) ? distance(variable.begin(), it) : -1;
    // }

%}

%token STARTMAIN ENDMAIN HEADER JOG BIYOG GUNN BHAGG OBOSSHOIKORO LAFAW KOKHONO VANGO NORMALLY BHAGGSHES SUCHOK BARBEI KOMBEI POROMMAN SHARI NOT AND OR ANDAND OROR LESS GREATER EQ LEQ GEQ NEQ JOTOKHON GHURO JODI NAHOLE JODINA TOBE DEKHAW LIKHO LPAREN RPAREN LFIRST RFIRST AINDEX LBRACE RBRACE ASSIGN SEMICOLON COMMA STARTOFFUNCTION ENDOFFUNCTION RETURN SURU CHOLO FACT LEAPYEAR SQRT GCD LCM MAX MIN PRIME RANGE FROM

%nonassoc JODI
%nonassoc JODINA
%nonassoc NAHOLE
%left LESS GREATER EQ GEQ LEQ NEQ
%left JOG BIYOG
%left GUNN BHAGG
%left BHAGGSHES
%left SUCHOK
%left BARBEI 
%left KOMBEI
%left POROMMAN
%left NOT
%left OR 
%left AND
%left LBRACE RBRACE
%left LPAREN RPAREN
%right ASSIGN

%token <intVal> WHOLENUMBER  
%token <floatVal>  FRACTIONNUMBER
%token <stringVal> STRINGLITERAL
%token <varType>   PURNO VOGNO SOBDO 
%token <varName> ID

%union
{
    char *varName;
    char *varType;
    int intVal;
    float floatVal;
    char *stringVal;
};




%type <intVal> arithmetic_expression
%type <intVal> relational_expression
%type <intVal> logical_expression
%type <intVal> some
%type <intVal> some1
%type <intVal> param_last
%type <intVal> last_id
%type <intVal> declare
%type <varType> type
%type <varName> id2
%type <intVal> lines
%type <intVal> initialization
%type <intVal> condional
%type <intVal> incordec
%type <intVal> program



%error-verbose /* shows syntax error. */
%debug 

%%

program : import STARTMAIN lines ENDMAIN { cout << "Valid Program\n"; 
                                    return 0;
                                    }

import: HEADER{ 
                printf("\nHeader File is Found\n"); 
            }
		| /*empty*/
		| HEADER import { 
                printf("\nHeader File is Found\n"); 
            }
        | func { printf("\n"); }
		;
func: fun func { printf("\n"); }
    | fun { printf("\n"); }
    ;
fun: STARTOFFUNCTION return_type func_name LFIRST arguments RFIRST lines ENDOFFUNCTION
    {
        cout<<"Function declaration;\n";
    }
    ;
func_name:
    ID {
        if(func_exist($1))
            {
                            func_assign($1);
            cout<<"New function ";

            }
        else{
                cout<<"ERROR: function Defined twice";
        }
    }
    ;
return_type: { cout<<"VOID return type; "}
    | type
    {
        cout<<"is the Return Type ";
    }
arguments:
    | arguments arggg 
    ;
arggg: type id2 {
        cout<<"is a Argument name "<<$2<<" ";   
    }
    | COMMA type id2 {
        cout<<"is a Argument name "<<$3<<" ";    
    }
lines	: /* empty */ { }
    | lines codes
	;

declare	:
	type id SEMICOLON { 

        }
	;

type :
	PURNO  { vemp.push_back($1); $$ = $1; cout<<"Type: PURNO "; }
	| VOGNO { vemp.push_back($1); $$ = $1; cout<<"Type: VOGNO "; }
	| SOBDO { $$ = $1; cout<<"Type: SOBDO "; }
	;

id	:
	id2 
	| id COMMA id2
	;
id2 :
    ID {
            int idx = var_exist($1);
            if (idx != -1) {
                cout << $1 << " is already declared!" << endl;
            } else {
                var[temp] = $1;
                alreadyDeclared[temp] = 1;
                temp++;
                varIndex[$1] = temp -1;
                varValue[$1] = 0;
            }
            $$ = $1;
     }
    | ID ASSIGN some {
            int idx = var_exist($1);
            if (idx != -1) {
                cout << $1 << " is already declared!" << endl;
            } 
            else {
                var[temp] = $1;
                alreadyDeclared[temp] = 1;
                temp++;
                varIndex[$1] = temp - 1;
                varValue[$1] = $3;
            }
            $$ = $1;
     }
    ;
some :
    some JOG some1 { $$ = $1 + $3; }
    | some BIYOG some1 { $$ = $1 - $3;}
    | some1 { $$ = $1;}
	|FACT some       
    { 
        int ans = 1; for(int i=1; i<=$2; i++){ans*=i;}printf("Factorial of %d is %d\n",$2,ans);
        $$ = ans;
    }
    |LEAPYEAR some     
    { 
        int year=$2; if((year%4==0 &&year%100!=0)||(year%400==0)){printf("%d is a leap year\n" ,year);$$ = 1;}else {printf("%d is not a leap year\n" ,year);$$ = 0;}
        
    }
	|SQRT some       
    { 
        printf("Value of root=%lf\n",sqrt($2*1.0));
        $$ = sqrt($2*1.0);
    }
	|GCD LFIRST some COMMA some RFIRST   
    { 
            int n1=$3,n2=$5,g;
	        for(int i=1;i<=n1&&i<=n2;i++)
			{
			  if(n1%i==0&&n2%i==0)
			  {
			     g=i;
			
			 }
			 }
		printf("Gcd of %d and %d = %d\n",$3,$5,g);
        $$ = g;
    }
	|LCM LFIRST some COMMA some RFIRST  
    { 
            int n1=$3,n2=$5,g;
	        for(int i=1;i<=n1&&i<=n2;i++)
			{
			  if(n1%i==0&&n2%i==0)
			  {
			     g=i;
			  }
			 }
			 int x=n1/g*n2;
		printf("Lcm of %d and %d = %d\n",$3,$5,x);
        $$ = x;					
    }
	|MAX LFIRST some COMMA some RFIRST  
    { 
                int n1=$3,n2=$5;
	            if(n1>n2){
				    printf("Max of %d and %d = %d\n",$3,$5,n1);
                    $$ = n1;
                }
				else{
				printf("Max of %d and %d = %d\n",$3,$5,n2);
                $$ = n2;
                }
    }
    |MIN LFIRST some COMMA some RFIRST  
    {
                int n1=$3,n2=$5;
	            if(n1>n2){
					printf("Min of %d and %d = %d\n",$3,$5,n2);
                    $$ = n2;
                }
				else{
					printf("Min of %d and %d = %d\n",$3,$5,n1);
                    $$ = n1;
                }
    } 
    |PRIME LFIRST some RFIRST           
	{ 
			int x = $3;
			int ck = 0;
			int i; 
			for(i=2; i*i<=x; i++)
			{
				if( x%i == 0 )
				{
					ck = 1;
					break;
				}
			}
			if( ck )
			{
				printf("\n%d is Not prime \n",x);
                $$ = 0;
			}
			else
			{
				printf("\n%d is prime \n",x);
                $$ = 1;
			}
    }  
    ;
some1 :
    some1 GUNN param_last { $$ = $1 * $3; }
    | some1 BHAGG param_last { 
            if($3)
                {
                $$ = ($1 / $3)*1.0 ;
                }
            else
                {
                $$ = 0;
                printf("\n Division by 0 is not Allowed.\n");
                }
        }
    | param_last { $$ = $1;}
    ;
param_last :
    arithmetic_expression { $$ = $1; }
    | relational_expression { $$ = $1; }
    | logical_expression { $$ = $1; }
    | last_id { $$ = $1; }
    ; 

arithmetic_expression :
    param_last BHAGGSHES last_id {
        int x = $3;
        int y = $1;
        int z = y % x;
        $$ = z;
    }
    | param_last SUCHOK last_id  { 
        $$ = pow($1, $3); 
    }
    ;

relational_expression :
    param_last LESS param_last { $$ = $1 < $3; }
    | param_last GREATER param_last { $$ = $1 > $3; }
    | param_last LEQ param_last { $$ = $1 <= $3; }
    | param_last NEQ param_last { $$ = (1 != $3); }
    | param_last EQ param_last { $$ = (1 != $3); }
    | param_last GEQ param_last { $$ = $1 >= $3; }
    ;

logical_expression :
    param_last AND param_last { $$ = ($1 & $3); }
    | param_last OR param_last { $$ = ($1 | $3); }
    | param_last ANDAND param_last { $$ = ($1 && $3); }
    | param_last OROR param_last { $$ = ($1 || $3); }
    | NOT param_last {
        $$ = (!($2))*1.0 ;
    }
    ;
last_id :
    LFIRST some RFIRST { $$ = $2; }
    | WHOLENUMBER { $$ = $1; }
    | FRACTIONNUMBER { $$ = $1; }
    | STRINGLITERAL {

        }
    | ID {
            int idx = var_exist($1);
            if (idx != -1) {
                $$ = varValue[$1] ;
            } 
            else {
                cout << $1 << " is not declared!" << endl;
            }
         }
    ;
other:
    other COMMA ID
    {
        int idx = var_exist($3);
        if (idx != -1) {
            cout << $3 << " is already declared!" << endl;
        } 
        else {
            var[temp] = $3;
            alreadyDeclared[temp] = 1;
            temp++;
            varIndex[$3] = temp - 1;
            int x;
            cin>>x;
            varValue[$3] = x;
            printf("Integer Variable, %s = %d\n", $3, varValue[$3]);
        }
    }
    |ID { 
        int idx = var_exist($1);
        if (idx != -1) {
            cout << $1 << " is already declared!" << endl;
        } 
        else {
            var[temp] = $1;
            alreadyDeclared[temp] = 1;
            temp++;
            varIndex[$1] = temp - 1;
            int x;
            cin>>x;
            varValue[$1] = x;
        }
    }
codes:
    SEMICOLON
    | expression SEMICOLON
    | declare 
    { 

    }
    | DEKHAW putput SEMICOLON 
    { 
        cout << " printed\n"; 
    }
    | LIKHO type other SEMICOLON
    {
        cout << "scan \n"; 
    }
    | if_blocksed 
    { 

    }
	| for_blocksed 
    { 
        cout << "for \n"; 
    }
    | while_blocksed 
    { 
        cout << "while \n"; 
    }
    | do_while_blocksed 
    { 
        cout << "do while\n"; 
    }
    | switch_blocksed 
    { 
        cout << "switch\n"; 
    }
    | RETURN last_id SEMICOLON 
    {
        cout << "return\n"; 
    }
    ;
putput:
    | STRINGLITERAL putput {
        cout<< $1 <<" ";
    }
    | STRINGLITERAL JOG showvariable putput
    {
                cout<< $1 <<" ";
    }
    ;
showvariable:
    ID JOG {
        cout<< varValue[$1] <<" ";
    }
    | ID{
        cout<< varValue[$1] <<" ";
    }
    ;
expression:
	some
    | ID ASSIGN ID LFIRST id RFIRST
    {
        cout<<"Function called";
    }   
    | ID ASSIGN some {
        int idx = var_exist($1);

        if(idx==-1){
            printf("Variable %s has not been Declared Yet\n", $1);
        }
        else {
                int x = $3 ;
                varValue[$1] = x;
                cout<<$1<<" assigned with "<<varValue[$1]<<" ";
        }
    } 
    ;
if_blocksed:
	JODI if_block else_statement 
    { 
        cout << "if_done\n";
    }	
	;
if_block:		
    last_id SEMICOLON LBRACE lines RBRACE 
    {
        if( (int)$1 ){
            cout<<"Inside If Block"<<$1<<"\n";
        }
        else {
            printf("IF don't match\n");
        }
    }	
   ;
else_statement:
            | elif_statement   single_else 
            | single_else
    ; 
single_else:
        NAHOLE LBRACE lines RBRACE
        { 
           printf("Inside else Block\n");
        }
    ;
elif_statement:
            elif_statement  single_elif
            | single_elif 
    ;
single_elif:
            JODINA last_id SEMICOLON LBRACE lines RBRACE	 
                {
                    if( (int)$2 ){
                        printf("Inside else if Block\n");
                    }
                    else {
                        printf("Else IF don't match\n");
                    } 
                }
    ;   
for_blocksed:
            GHURO initialization SEMICOLON condional SEMICOLON incordec SEMICOLON LBRACE lines RBRACE
            {
                printf("initializer value %d, condition value %lf, inc/dec/operation value %lf\n",$2, $4, $6);
                int count = 0;
                printf("inside for loop");
                 	int i;
                    for(i= $2 ; i<= $4 ; i+=$6)
                    {
                        printf("Expression in for loop increasing %d\n",i);
                    } printf("\n");	 		
            }
            | GHURO RANGE some FROM some SEMICOLON LBRACE lines RBRACE{
                printf("range for loop\n");
                int rngs=(int)$3;
                int rnge=(int)$5;
                int index,count=0;
                for(index=rngs;index<=rnge;index++)
                {
                    count++;
                }
                printf("range for loop ran %d times \n",count);
            }
            ;
initialization:
        | ID {
            $$ = varValue[$1];
        }
        | ID ASSIGN some {
            varValue[$1] = $3;
            $$ = $3;
        }
        | initialization COMMA ID   {
            $$ = varValue[$3];
        }
        | initialization COMMA ID ASSIGN some {
            varValue[$3] = $5;
            $$ = $5;
        }
    ;
condional:            
        |relational_expression
    ;
incordec:
        | ID ASSIGN some {
            varValue[$1] = $3;
            $$ = $3;
        }
        | incordec COMMA ID ASSIGN some {
            varValue[$3] = $5;
            $$ = $5;
        }
    ;
while_blocksed:
	     JOTOKHON  condional SEMICOLON LBRACE lines RBRACE {
                if($2)
                {
                    printf("while loop will be executed\n");

                }
                else {
                    printf("while loop wont be executed\n");
                }
         }
    ;
do_while_blocksed:
        OBOSSHOIKORO LBRACE lines RBRACE JOTOKHON condional SEMICOLON {
              printf("do while loop iteration\n");
            if($6)
            {
                printf("dowhile loop will be executed again\n");
            }
            else {
                printf("dowhile loop wont be executed again\n");
            }
        }
    ;
switch_blocksed:
     LAFAW some SEMICOLON LBRACE sp_code RBRACE {
        maincase =(int)$2;
        cout<<"Inside switch statement with value"<<$2<<endl;
     }
     ;

sp_code: sp_code1
     |sp_code1 NORMALLY SURU lines B
		{ 
            printf("default case from switch case");
        }
	;
sp_code1: 
        sp_code1 KOKHONO some SURU lines B {
            subcase =(int) $3;
            //printf("inside int case %d",$2);
            int ddd = maincase-subcase;
            if(ddd==-$3)
            {
            printf("%d matched",$3);
            }
        }
        | KOKHONO some SURU lines B {
             subcase =(int) $2;
            //printf("inside int case %d",$2);
            int ddd = maincase-subcase;
            if(ddd==-$2)
            {
            printf("%d matched",$2);
            }
        }
        ;

B:  
    VANGO SEMICOLON 
        {
            printf("break is used\n");
        }
    |  CHOLO SEMICOLON 
        {   
            printf("continue is used\n");
        }
    ;



%%

int main(){
    FILE* yyin = freopen("anewinput.txt","r",stdin);
	FILE* yyout = freopen("output.txt","w",stdout);
	//FILE* yyin=fopen("input3.txt","r");
	yyparse();
	//fclose(yyin);
	return 0;
}

int yyerror(const char* s) {
     printf("%s\n", s); 
     return 0;
}
