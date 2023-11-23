
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1907039.y"

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



/* Line 189 of yacc.c  */
#line 162 "1907039.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STARTMAIN = 258,
     ENDMAIN = 259,
     HEADER = 260,
     JOG = 261,
     BIYOG = 262,
     GUNN = 263,
     BHAGG = 264,
     OBOSSHOIKORO = 265,
     LAFAW = 266,
     KOKHONO = 267,
     VANGO = 268,
     NORMALLY = 269,
     BHAGGSHES = 270,
     SUCHOK = 271,
     BARBEI = 272,
     KOMBEI = 273,
     POROMMAN = 274,
     SHARI = 275,
     NOT = 276,
     AND = 277,
     OR = 278,
     ANDAND = 279,
     OROR = 280,
     LESS = 281,
     GREATER = 282,
     EQ = 283,
     LEQ = 284,
     GEQ = 285,
     NEQ = 286,
     JOTOKHON = 287,
     GHURO = 288,
     JODI = 289,
     NAHOLE = 290,
     JODINA = 291,
     TOBE = 292,
     DEKHAW = 293,
     LIKHO = 294,
     LPAREN = 295,
     RPAREN = 296,
     LFIRST = 297,
     RFIRST = 298,
     AINDEX = 299,
     LBRACE = 300,
     RBRACE = 301,
     ASSIGN = 302,
     SEMICOLON = 303,
     COMMA = 304,
     STARTOFFUNCTION = 305,
     ENDOFFUNCTION = 306,
     RETURN = 307,
     SURU = 308,
     CHOLO = 309,
     FACT = 310,
     LEAPYEAR = 311,
     SQRT = 312,
     GCD = 313,
     LCM = 314,
     MAX = 315,
     MIN = 316,
     PRIME = 317,
     RANGE = 318,
     FROM = 319,
     WHOLENUMBER = 320,
     FRACTIONNUMBER = 321,
     STRINGLITERAL = 322,
     PURNO = 323,
     VOGNO = 324,
     SOBDO = 325,
     ID = 326
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 116 "1907039.y"

    char *varName;
    char *varType;
    int intVal;
    float floatVal;
    char *stringVal;



/* Line 214 of yacc.c  */
#line 279 "1907039.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 291 "1907039.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   701

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  254

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    11,    14,    16,    19,    21,
      30,    32,    33,    35,    36,    39,    42,    46,    47,    50,
      54,    56,    58,    60,    62,    66,    68,    72,    76,    80,
      82,    85,    88,    91,    98,   105,   112,   119,   124,   128,
     132,   134,   136,   138,   140,   142,   146,   150,   154,   158,
     162,   166,   170,   174,   178,   182,   186,   190,   193,   197,
     199,   201,   203,   205,   209,   211,   213,   216,   218,   222,
     227,   229,   231,   233,   235,   237,   241,   242,   245,   250,
     253,   255,   257,   264,   268,   272,   278,   279,   282,   284,
     289,   292,   294,   301,   312,   322,   323,   325,   329,   333,
     339,   340,   342,   343,   347,   353,   360,   368,   375,   377,
     383,   390,   396,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      73,     0,    -1,    74,     3,    81,     4,    -1,     5,    -1,
      -1,     5,    74,    -1,    75,    -1,    76,    75,    -1,    76,
      -1,    50,    78,    77,    42,    79,    43,    81,    51,    -1,
      71,    -1,    -1,    83,    -1,    -1,    79,    80,    -1,    83,
      85,    -1,    49,    83,    85,    -1,    -1,    81,    94,    -1,
      83,    84,    48,    -1,    68,    -1,    69,    -1,    70,    -1,
      85,    -1,    84,    49,    85,    -1,    71,    -1,    71,    47,
      86,    -1,    86,     6,    87,    -1,    86,     7,    87,    -1,
      87,    -1,    55,    86,    -1,    56,    86,    -1,    57,    86,
      -1,    58,    42,    86,    49,    86,    43,    -1,    59,    42,
      86,    49,    86,    43,    -1,    60,    42,    86,    49,    86,
      43,    -1,    61,    42,    86,    49,    86,    43,    -1,    62,
      42,    86,    43,    -1,    87,     8,    88,    -1,    87,     9,
      88,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
      92,    -1,    88,    15,    92,    -1,    88,    16,    92,    -1,
      88,    26,    88,    -1,    88,    27,    88,    -1,    88,    29,
      88,    -1,    88,    31,    88,    -1,    88,    28,    88,    -1,
      88,    30,    88,    -1,    88,    22,    88,    -1,    88,    23,
      88,    -1,    88,    24,    88,    -1,    88,    25,    88,    -1,
      21,    88,    -1,    42,    86,    43,    -1,    65,    -1,    66,
      -1,    67,    -1,    71,    -1,    93,    49,    71,    -1,    71,
      -1,    48,    -1,    97,    48,    -1,    82,    -1,    38,    95,
      48,    -1,    39,    83,    93,    48,    -1,    98,    -1,   104,
      -1,   108,    -1,   109,    -1,   110,    -1,    52,    92,    48,
      -1,    -1,    67,    95,    -1,    67,     6,    96,    95,    -1,
      71,     6,    -1,    71,    -1,    86,    -1,    71,    47,    71,
      42,    84,    43,    -1,    71,    47,    86,    -1,    34,    99,
     100,    -1,    92,    48,    45,    81,    46,    -1,    -1,   102,
     101,    -1,   101,    -1,    35,    45,    81,    46,    -1,   102,
     103,    -1,   103,    -1,    36,    92,    48,    45,    81,    46,
      -1,    33,   105,    48,   106,    48,   107,    48,    45,    81,
      46,    -1,    33,    63,    86,    64,    86,    48,    45,    81,
      46,    -1,    -1,    71,    -1,    71,    47,    86,    -1,   105,
      49,    71,    -1,   105,    49,    71,    47,    86,    -1,    -1,
      90,    -1,    -1,    71,    47,    86,    -1,   107,    49,    71,
      47,    86,    -1,    32,   106,    48,    45,    81,    46,    -1,
      10,    45,    81,    46,    32,   106,    48,    -1,    11,    86,
      48,    45,   111,    46,    -1,   112,    -1,   112,    14,    53,
      81,   113,    -1,   112,    12,    86,    53,    81,   113,    -1,
      12,    86,    53,    81,   113,    -1,    13,    48,    -1,    54,
      48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   150,   150,   154,   157,   158,   161,   163,   164,   166,
     172,   184,   185,   189,   190,   192,   195,   198,   199,   203,
     209,   210,   211,   215,   216,   219,   232,   248,   249,   250,
     251,   256,   261,   266,   280,   294,   306,   318,   344,   345,
     356,   359,   360,   361,   362,   366,   372,   378,   379,   380,
     381,   382,   383,   387,   388,   389,   390,   391,   396,   397,
     398,   399,   402,   413,   430,   446,   447,   448,   452,   456,
     460,   464,   468,   472,   476,   480,   485,   486,   489,   495,
     498,   503,   504,   508,   522,   528,   538,   539,   540,   543,
     549,   550,   553,   564,   575,   587,   588,   591,   595,   598,
     603,   604,   606,   607,   611,   617,   629,   641,   647,   648,
     654,   663,   675,   679
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STARTMAIN", "ENDMAIN", "HEADER", "JOG",
  "BIYOG", "GUNN", "BHAGG", "OBOSSHOIKORO", "LAFAW", "KOKHONO", "VANGO",
  "NORMALLY", "BHAGGSHES", "SUCHOK", "BARBEI", "KOMBEI", "POROMMAN",
  "SHARI", "NOT", "AND", "OR", "ANDAND", "OROR", "LESS", "GREATER", "EQ",
  "LEQ", "GEQ", "NEQ", "JOTOKHON", "GHURO", "JODI", "NAHOLE", "JODINA",
  "TOBE", "DEKHAW", "LIKHO", "LPAREN", "RPAREN", "LFIRST", "RFIRST",
  "AINDEX", "LBRACE", "RBRACE", "ASSIGN", "SEMICOLON", "COMMA",
  "STARTOFFUNCTION", "ENDOFFUNCTION", "RETURN", "SURU", "CHOLO", "FACT",
  "LEAPYEAR", "SQRT", "GCD", "LCM", "MAX", "MIN", "PRIME", "RANGE", "FROM",
  "WHOLENUMBER", "FRACTIONNUMBER", "STRINGLITERAL", "PURNO", "VOGNO",
  "SOBDO", "ID", "$accept", "program", "import", "func", "fun",
  "func_name", "return_type", "arguments", "arggg", "lines", "declare",
  "type", "id", "id2", "some", "some1", "param_last",
  "arithmetic_expression", "relational_expression", "logical_expression",
  "last_id", "other", "codes", "putput", "showvariable", "expression",
  "if_blocksed", "if_block", "else_statement", "single_else",
  "elif_statement", "single_elif", "for_blocksed", "initialization",
  "condional", "incordec", "while_blocksed", "do_while_blocksed",
  "switch_blocksed", "sp_code", "sp_code1", "B", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    74,    74,    74,    74,    75,    75,    76,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    97,    97,    97,    98,    99,   100,   100,   100,   101,
     102,   102,   103,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   107,   107,   107,   108,   109,   110,   111,   111,
     112,   112,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     0,     2,     1,     2,     1,     8,
       1,     0,     1,     0,     2,     2,     3,     0,     2,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     6,     6,     6,     6,     4,     3,     3,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       1,     1,     1,     3,     1,     1,     2,     1,     3,     4,
       1,     1,     1,     1,     1,     3,     0,     2,     4,     2,
       1,     1,     6,     3,     3,     5,     0,     2,     1,     4,
       2,     1,     6,    10,     9,     0,     1,     3,     3,     5,
       0,     1,     0,     3,     5,     6,     7,     6,     1,     5,
       6,     5,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     3,    11,     0,     0,     6,     8,     5,    20,    21,
      22,     0,    12,     1,    17,     7,    10,     0,     0,    13,
       2,     0,     0,     0,   100,    95,     0,    76,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    67,     0,    81,    29,    40,    41,
      42,    43,    44,    18,     0,    70,    71,    72,    73,    74,
       0,    17,    62,     0,    57,     0,    42,     0,     0,    96,
       0,     0,    86,    76,     0,     0,     0,     0,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    25,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    17,     0,    14,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,    84,    88,     0,    91,     0,    77,    68,    64,     0,
      58,    75,     0,     0,     0,     0,     0,    62,    83,     0,
      19,     0,    27,    28,    38,    39,    45,    46,    53,    54,
      55,    56,    47,    48,    51,    49,    52,    50,     0,     0,
      15,     0,     0,    17,     0,    97,     0,    98,    17,    17,
       0,    87,    90,    80,    76,    69,     0,     0,     0,     0,
       0,    37,     0,    26,    24,     9,    16,   100,     0,     0,
     108,     0,     0,   102,     0,     0,     0,     0,    79,    78,
      63,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,   105,     0,     0,     0,    99,    85,    89,    17,    33,
      34,    35,    36,    82,   106,    17,     0,    17,    17,     0,
       0,     0,     0,     0,    17,     0,     0,   103,    17,     0,
      92,     0,     0,   111,     0,   109,    94,     0,     0,   112,
     113,   110,    93,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    17,    11,    60,   109,    18,
      44,    45,    88,    89,    46,    47,    48,    49,    50,    51,
      52,   129,    53,    74,   174,    54,    55,    72,   121,   122,
     123,   124,    56,    70,    67,   214,    57,    58,    59,   189,
     190,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
      48,    48,    95,     2,    14,  -202,   -30,  -202,  -202,  -202,
    -202,    -5,  -202,  -202,  -202,  -202,  -202,    -1,   179,  -202,
    -202,    10,    70,   -15,   -15,   -48,   -29,    34,    95,    70,
    -202,   -29,    70,    70,    70,    72,    74,    82,   101,   140,
    -202,  -202,  -202,   139,  -202,   124,    24,    36,   670,  -202,
    -202,  -202,  -202,  -202,   148,  -202,  -202,  -202,  -202,  -202,
     136,  -202,  -202,    51,    96,   670,   151,   154,    70,   150,
      21,   160,    98,     8,   161,   130,    33,   162,    24,    24,
      24,    70,    70,    70,    70,    70,   617,   156,    91,  -202,
     -15,   -15,   -15,   -15,   -29,   -29,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,  -202,  -202,    95,  -202,
     124,   294,   169,   174,    26,    70,   -15,   157,   175,   184,
     -29,  -202,  -202,    98,  -202,   159,  -202,  -202,  -202,   105,
    -202,  -202,    22,    89,    97,   100,   116,   190,    24,    70,
    -202,   124,    36,    36,   670,   670,  -202,  -202,   149,   153,
     670,   670,   200,   200,   200,   200,   200,   200,   337,   124,
    -202,   201,   230,  -202,    70,    24,   195,   206,  -202,  -202,
     207,  -202,  -202,   250,    34,  -202,   186,    70,    70,    70,
      70,  -202,   124,    24,  -202,  -202,  -202,   -15,    70,   212,
      80,   380,   102,   188,    70,   423,   466,   215,  -202,  -202,
    -202,   138,   141,   145,   155,     5,   213,    15,  -202,    70,
     210,  -202,   219,   218,   143,    24,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,    19,  -202,  -202,    70,
     221,   196,   509,   241,  -202,   241,   552,    24,  -202,   222,
    -202,   220,   223,  -202,   241,  -202,  -202,   595,    70,  -202,
    -202,  -202,  -202,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,   269,   266,  -202,  -202,  -202,  -202,  -202,   -58,
    -202,     7,    94,   -94,   -22,   103,   -19,  -202,   -16,  -202,
      -7,  -202,  -202,   -72,  -202,  -202,  -202,  -202,  -202,   158,
    -202,   163,  -202,  -202,   -98,  -202,  -202,  -202,  -202,  -202,
    -202,  -201
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      63,   126,    13,   111,    64,    65,    23,    76,    66,    12,
      78,    79,    80,    29,   125,    68,   160,    14,   166,    71,
       2,    90,    91,    69,    77,    90,    91,    29,    90,    91,
      90,    91,    90,    91,   245,    75,    40,    41,    42,    90,
      91,    19,    62,   251,    92,    93,   114,   184,   223,   158,
      40,    41,    42,     1,   141,    61,    62,    90,    91,   132,
     133,   134,   135,   136,   138,   186,    16,   110,   225,   116,
     117,   177,   234,   144,   145,    73,   130,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   146,   147,   206,
     164,    23,   209,   165,   210,    90,    91,    65,     2,   112,
      66,    73,   199,    90,    91,   191,    90,    91,    90,    91,
     195,   196,    29,   170,    81,   159,    82,   183,    96,    97,
      98,    99,    90,    91,    83,    32,    33,    34,    35,    36,
      37,    38,    39,   119,   120,    40,    41,    42,   178,   140,
     141,    62,   192,    84,    90,    91,   179,    90,    91,   180,
     212,    90,    91,   175,   176,   201,   202,   203,   204,   181,
     232,    90,    91,     8,     9,    10,   207,   233,    65,   235,
     236,    66,   215,    98,    99,    96,   244,    98,    99,   107,
     247,   219,    85,    20,   220,   108,    86,   226,   221,    21,
      22,   230,   231,   142,   143,    87,   106,   115,   222,  -101,
      23,   128,   113,   139,     8,     9,    10,   237,   118,   127,
     131,    24,    25,    26,   162,    94,    95,    27,    28,   163,
     168,    29,    96,    97,    98,    99,   253,    30,   167,   169,
     173,    31,   182,   187,    32,    33,    34,    35,    36,    37,
      38,    39,   188,   193,    40,    41,    42,     8,     9,    10,
      43,    21,    22,   194,   241,   197,   198,   200,   208,   213,
     218,   224,    23,   227,   228,   229,   238,   239,   249,   248,
       7,   250,    15,    24,    25,    26,   205,     0,     0,    27,
      28,   171,     0,    29,     0,     0,   172,     0,     0,    30,
       0,     0,     0,    31,     0,   242,    32,    33,    34,    35,
      36,    37,    38,    39,    21,    22,    40,    41,    42,     8,
       9,    10,    43,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,     0,
       0,     0,    27,    28,     0,     0,    29,     0,     0,     0,
     161,     0,    30,     0,     0,     0,    31,    21,    22,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    23,    40,
      41,    42,     8,     9,    10,    43,     0,     0,     0,    24,
      25,    26,     0,     0,     0,    27,    28,     0,     0,    29,
       0,     0,     0,     0,     0,    30,     0,     0,   185,    31,
      21,    22,    32,    33,    34,    35,    36,    37,    38,    39,
       0,    23,    40,    41,    42,     8,     9,    10,    43,     0,
       0,     0,    24,    25,    26,     0,     0,     0,    27,    28,
       0,     0,    29,     0,     0,     0,   211,     0,    30,     0,
       0,     0,    31,    21,    22,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    23,    40,    41,    42,     8,     9,
      10,    43,     0,     0,     0,    24,    25,    26,     0,     0,
       0,    27,    28,     0,     0,    29,     0,     0,     0,   216,
       0,    30,     0,     0,     0,    31,    21,    22,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    23,    40,    41,
      42,     8,     9,    10,    43,     0,     0,     0,    24,    25,
      26,     0,     0,     0,    27,    28,     0,     0,    29,     0,
       0,     0,   217,     0,    30,     0,     0,     0,    31,    21,
      22,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      23,    40,    41,    42,     8,     9,    10,    43,     0,     0,
       0,    24,    25,    26,     0,     0,     0,    27,    28,     0,
       0,    29,     0,     0,     0,   240,     0,    30,     0,     0,
       0,    31,    21,    22,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    23,    40,    41,    42,     8,     9,    10,
      43,     0,     0,     0,    24,    25,    26,     0,     0,     0,
      27,    28,     0,     0,    29,     0,     0,     0,   246,     0,
      30,     0,     0,     0,    31,    21,    22,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    23,    40,    41,    42,
       8,     9,    10,    43,     0,     0,     0,    24,    25,    26,
       0,     0,     0,    27,    28,     0,     0,    29,    23,     0,
       0,   252,     0,    30,     0,     0,     0,    31,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    29,
      40,    41,    42,     8,     9,    10,    43,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
       0,     0,    40,    41,    42,    94,    95,     0,   137,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105
};

static const yytype_int16 yycheck[] =
{
      22,    73,     0,    61,    23,    24,    21,    29,    24,     2,
      32,    33,    34,    42,     6,    63,   110,     3,   116,    26,
      50,     6,     7,    71,    31,     6,     7,    42,     6,     7,
       6,     7,     6,     7,   235,    28,    65,    66,    67,     6,
       7,    42,    71,   244,     8,     9,    68,   141,    43,   107,
      65,    66,    67,     5,    49,    45,    71,     6,     7,    81,
      82,    83,    84,    85,    86,   159,    71,    60,    53,    48,
      49,    49,    53,    92,    93,    67,    43,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    94,    95,   187,
      64,    21,    12,   115,    14,     6,     7,   116,    50,    48,
     116,    67,   174,     6,     7,   163,     6,     7,     6,     7,
     168,   169,    42,   120,    42,   108,    42,   139,    22,    23,
      24,    25,     6,     7,    42,    55,    56,    57,    58,    59,
      60,    61,    62,    35,    36,    65,    66,    67,    49,    48,
      49,    71,   164,    42,     6,     7,    49,     6,     7,    49,
      48,     6,     7,    48,    49,   177,   178,   179,   180,    43,
     218,     6,     7,    68,    69,    70,   188,   225,   187,   227,
     228,   187,   194,    24,    25,    22,   234,    24,    25,    43,
     238,    43,    42,     4,    43,    49,    47,   209,    43,    10,
      11,    48,    49,    90,    91,    71,    48,    47,    43,    48,
      21,    71,    48,    47,    68,    69,    70,   229,    48,    48,
      48,    32,    33,    34,    45,    15,    16,    38,    39,    45,
      45,    42,    22,    23,    24,    25,   248,    48,    71,    45,
      71,    52,    42,    32,    55,    56,    57,    58,    59,    60,
      61,    62,    12,    48,    65,    66,    67,    68,    69,    70,
      71,    10,    11,    47,    13,    48,     6,    71,    46,    71,
      45,    48,    21,    53,    45,    47,    45,    71,    48,    47,
       1,    48,     6,    32,    33,    34,   182,    -1,    -1,    38,
      39,   123,    -1,    42,    -1,    -1,   123,    -1,    -1,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    10,    11,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    52,    10,    11,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    21,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      10,    11,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    21,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    -1,    52,    10,    11,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    21,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,    -1,    -1,    -1,    52,    10,    11,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    21,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    10,
      11,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      21,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    10,    11,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    21,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    52,    10,    11,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    21,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    21,    -1,
      -1,    46,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    42,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    67,    15,    16,    -1,    71,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    50,    73,    74,    75,    76,    74,    68,    69,
      70,    78,    83,     0,     3,    75,    71,    77,    81,    42,
       4,    10,    11,    21,    32,    33,    34,    38,    39,    42,
      48,    52,    55,    56,    57,    58,    59,    60,    61,    62,
      65,    66,    67,    71,    82,    83,    86,    87,    88,    89,
      90,    91,    92,    94,    97,    98,   104,   108,   109,   110,
      79,    45,    71,    86,    88,    88,    90,   106,    63,    71,
     105,    92,    99,    67,    95,    83,    86,    92,    86,    86,
      86,    42,    42,    42,    42,    42,    47,    71,    84,    85,
       6,     7,     8,     9,    15,    16,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    48,    43,    49,    80,
      83,    81,    48,    48,    86,    47,    48,    49,    48,    35,
      36,   100,   101,   102,   103,     6,    95,    48,    71,    93,
      43,    48,    86,    86,    86,    86,    86,    71,    86,    47,
      48,    49,    87,    87,    88,    88,    92,    92,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    81,    83,
      85,    46,    45,    45,    64,    86,   106,    71,    45,    45,
      92,   101,   103,    71,    96,    48,    49,    49,    49,    49,
      49,    43,    42,    86,    85,    51,    85,    32,    12,   111,
     112,    81,    86,    48,    47,    81,    81,    48,     6,    95,
      71,    86,    86,    86,    86,    84,   106,    86,    46,    12,
      14,    46,    48,    71,   107,    86,    46,    46,    45,    43,
      43,    43,    43,    43,    48,    53,    86,    53,    45,    47,
      48,    49,    81,    81,    53,    81,    81,    86,    45,    71,
      46,    13,    54,   113,    81,   113,    46,    81,    47,    48,
      48,   113,    46,    86
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 150 "1907039.y"
    { cout << "Valid Program\n"; 
                                    return 0;
                                    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 154 "1907039.y"
    { 
                printf("\nHeader File is Found\n"); 
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 158 "1907039.y"
    { 
                printf("\nHeader File is Found\n"); 
            ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 161 "1907039.y"
    { printf("\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 163 "1907039.y"
    { printf("\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 164 "1907039.y"
    { printf("\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 167 "1907039.y"
    {
        cout<<"Function declaration;\n";
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 172 "1907039.y"
    {
        if(func_exist((yyvsp[(1) - (1)].varName)))
            {
                            func_assign((yyvsp[(1) - (1)].varName));
            cout<<"New function";

            }
        else{
                cout<<"ERROR: function Defined twice";
        }
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 184 "1907039.y"
    { cout<<"VOID return type; ";}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 186 "1907039.y"
    {
        cout<<"is the Return Type ";
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 192 "1907039.y"
    {
        cout<<"is a Argument name "<<(yyvsp[(2) - (2)].varName)<<" ";   
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 195 "1907039.y"
    {
        cout<<"is a Argument name "<<(yyvsp[(3) - (3)].varName)<<" ";    
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 198 "1907039.y"
    { ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 203 "1907039.y"
    { 

        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 209 "1907039.y"
    { vemp.push_back((yyvsp[(1) - (1)].varType)); (yyval.varType) = (yyvsp[(1) - (1)].varType); cout<<"Type: PURNO "; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 210 "1907039.y"
    { vemp.push_back((yyvsp[(1) - (1)].varType)); (yyval.varType) = (yyvsp[(1) - (1)].varType); cout<<"Type: VOGNO "; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 211 "1907039.y"
    { (yyval.varType) = (yyvsp[(1) - (1)].varType); cout<<"Type: SOBDO "; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 219 "1907039.y"
    {
            int idx = var_exist((yyvsp[(1) - (1)].varName));
            if (idx != -1) {
                cout << (yyvsp[(1) - (1)].varName) << " is already declared!" << endl;
            } else {
                var[temp] = (yyvsp[(1) - (1)].varName);
                alreadyDeclared[temp] = 1;
                temp++;
                varIndex[(yyvsp[(1) - (1)].varName)] = temp -1;
                varValue[(yyvsp[(1) - (1)].varName)] = 0;
            }
            (yyval.varName) = (yyvsp[(1) - (1)].varName);
     ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 232 "1907039.y"
    {
            int idx = var_exist((yyvsp[(1) - (3)].varName));
            if (idx != -1) {
                cout << (yyvsp[(1) - (3)].varName) << " is already declared!" << endl;
            } 
            else {
                var[temp] = (yyvsp[(1) - (3)].varName);
                alreadyDeclared[temp] = 1;
                temp++;
                varIndex[(yyvsp[(1) - (3)].varName)] = temp - 1;
                varValue[(yyvsp[(1) - (3)].varName)] = (yyvsp[(3) - (3)].intVal);
            }
            (yyval.varName) = (yyvsp[(1) - (3)].varName);
     ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 248 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) + (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 249 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) - (yyvsp[(3) - (3)].intVal);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 250 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 252 "1907039.y"
    { 
        int ans = 1; for(int i=1; i<=(yyvsp[(2) - (2)].intVal); i++){ans*=i;}printf("Factorial of %d is %d\n",(yyvsp[(2) - (2)].intVal),ans);
        (yyval.intVal) = ans;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 257 "1907039.y"
    { 
        int year=(yyvsp[(2) - (2)].intVal); if((year%4==0 &&year%100!=0)||(year%400==0)){printf("%d is a leap year\n" ,year);(yyval.intVal) = 1;}else {printf("%d is not a leap year\n" ,year);(yyval.intVal) = 0;}
        
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 262 "1907039.y"
    { 
        printf("Value of root=%lf\n",sqrt((yyvsp[(2) - (2)].intVal)*1.0));
        (yyval.intVal) = sqrt((yyvsp[(2) - (2)].intVal)*1.0);
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 267 "1907039.y"
    { 
            int n1=(yyvsp[(3) - (6)].intVal),n2=(yyvsp[(5) - (6)].intVal),g;
	        for(int i=1;i<=n1&&i<=n2;i++)
			{
			  if(n1%i==0&&n2%i==0)
			  {
			     g=i;
			
			 }
			 }
		printf("Gcd of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),g);
        (yyval.intVal) = g;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 281 "1907039.y"
    { 
            int n1=(yyvsp[(3) - (6)].intVal),n2=(yyvsp[(5) - (6)].intVal),g;
	        for(int i=1;i<=n1&&i<=n2;i++)
			{
			  if(n1%i==0&&n2%i==0)
			  {
			     g=i;
			  }
			 }
			 int x=n1/g*n2;
		printf("Lcm of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),x);
        (yyval.intVal) = x;					
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 295 "1907039.y"
    { 
                int n1=(yyvsp[(3) - (6)].intVal),n2=(yyvsp[(5) - (6)].intVal);
	            if(n1>n2){
				    printf("Max of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),n1);
                    (yyval.intVal) = n1;
                }
				else{
				printf("Max of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),n2);
                (yyval.intVal) = n2;
                }
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 307 "1907039.y"
    {
                int n1=(yyvsp[(3) - (6)].intVal),n2=(yyvsp[(5) - (6)].intVal);
	            if(n1>n2){
					printf("Min of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),n2);
                    (yyval.intVal) = n2;
                }
				else{
					printf("Min of %d and %d = %d\n",(yyvsp[(3) - (6)].intVal),(yyvsp[(5) - (6)].intVal),n1);
                    (yyval.intVal) = n1;
                }
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 319 "1907039.y"
    { 
			int x = (yyvsp[(3) - (4)].intVal);
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
                (yyval.intVal) = 0;
			}
			else
			{
				printf("\n%d is prime \n",x);
                (yyval.intVal) = 1;
			}
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) * (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 345 "1907039.y"
    { 
            if((yyvsp[(3) - (3)].intVal))
                {
                (yyval.intVal) = ((yyvsp[(1) - (3)].intVal) / (yyvsp[(3) - (3)].intVal))*1.0 ;
                }
            else
                {
                (yyval.intVal) = 0;
                printf("\n Division by 0 is not Allowed.\n");
                }
        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 356 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 359 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 360 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 361 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 362 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 366 "1907039.y"
    {
        int x = (yyvsp[(3) - (3)].intVal);
        int y = (yyvsp[(1) - (3)].intVal);
        int z = y % x;
        (yyval.intVal) = z;
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 372 "1907039.y"
    { 
        (yyval.intVal) = pow((yyvsp[(1) - (3)].intVal), (yyvsp[(3) - (3)].intVal)); 
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 378 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) < (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 379 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) > (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 380 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) <= (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 381 "1907039.y"
    { (yyval.intVal) = (1 != (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 382 "1907039.y"
    { (yyval.intVal) = (1 != (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 383 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (3)].intVal) >= (yyvsp[(3) - (3)].intVal); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 387 "1907039.y"
    { (yyval.intVal) = ((yyvsp[(1) - (3)].intVal) & (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 388 "1907039.y"
    { (yyval.intVal) = ((yyvsp[(1) - (3)].intVal) | (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 389 "1907039.y"
    { (yyval.intVal) = ((yyvsp[(1) - (3)].intVal) && (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 390 "1907039.y"
    { (yyval.intVal) = ((yyvsp[(1) - (3)].intVal) || (yyvsp[(3) - (3)].intVal)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 391 "1907039.y"
    {
        (yyval.intVal) = (!((yyvsp[(2) - (2)].intVal)))*1.0 ;
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 396 "1907039.y"
    { (yyval.intVal) = (yyvsp[(2) - (3)].intVal); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 397 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 398 "1907039.y"
    { (yyval.intVal) = (yyvsp[(1) - (1)].floatVal); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 399 "1907039.y"
    {

        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 402 "1907039.y"
    {
            int idx = var_exist((yyvsp[(1) - (1)].varName));
            if (idx != -1) {
                (yyval.intVal) = varValue[(yyvsp[(1) - (1)].varName)] ;
            } 
            else {
                cout << (yyvsp[(1) - (1)].varName) << " is not declared!" << endl;
            }
         ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 414 "1907039.y"
    {
        int idx = var_exist((yyvsp[(3) - (3)].varName));
        if (idx != -1) {
            cout << (yyvsp[(3) - (3)].varName) << " is already declared!" << endl;
        } 
        else {
            var[temp] = (yyvsp[(3) - (3)].varName);
            alreadyDeclared[temp] = 1;
            temp++;
            varIndex[(yyvsp[(3) - (3)].varName)] = temp - 1;
            int x;
            cin>>x;
            varValue[(yyvsp[(3) - (3)].varName)] = x;
            printf("Integer Variable, %s = %d\n", (yyvsp[(3) - (3)].varName), varValue[(yyvsp[(3) - (3)].varName)]);
        }
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 430 "1907039.y"
    { 
        int idx = var_exist((yyvsp[(1) - (1)].varName));
        if (idx != -1) {
            cout << (yyvsp[(1) - (1)].varName) << " is already declared!" << endl;
        } 
        else {
            var[temp] = (yyvsp[(1) - (1)].varName);
            alreadyDeclared[temp] = 1;
            temp++;
            varIndex[(yyvsp[(1) - (1)].varName)] = temp - 1;
            int x;
            cin>>x;
            varValue[(yyvsp[(1) - (1)].varName)] = x;
        }
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 449 "1907039.y"
    { 

    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 453 "1907039.y"
    { 
        cout << " printed\n"; 
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 457 "1907039.y"
    {
        cout << "scan \n"; 
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 461 "1907039.y"
    { 

    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 465 "1907039.y"
    { 
        cout << "for \n"; 
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 469 "1907039.y"
    { 
        cout << "while \n"; 
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 473 "1907039.y"
    { 
        cout << "do while\n"; 
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 477 "1907039.y"
    { 
        cout << "switch\n"; 
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 481 "1907039.y"
    {
        cout << "return\n"; 
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 486 "1907039.y"
    {
        cout<< (yyvsp[(1) - (2)].stringVal) <<" ";
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 490 "1907039.y"
    {
                cout<< (yyvsp[(1) - (4)].stringVal) <<" ";
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 495 "1907039.y"
    {
        cout<< varValue[(yyvsp[(1) - (2)].varName)] <<" ";
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 498 "1907039.y"
    {
        cout<< varValue[(yyvsp[(1) - (1)].varName)] <<" ";
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 505 "1907039.y"
    {
        cout<<"Function called";
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 508 "1907039.y"
    {
        int idx = var_exist((yyvsp[(1) - (3)].varName));

        if(idx==-1){
            printf("Variable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].varName));
        }
        else {
                int x = (yyvsp[(3) - (3)].intVal) ;
                varValue[(yyvsp[(1) - (3)].varName)] = x;
                cout<<(yyvsp[(1) - (3)].varName)<<" assigned with "<<varValue[(yyvsp[(1) - (3)].varName)]<<" ";
        }
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 523 "1907039.y"
    { 
        cout << "if_done\n";
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 529 "1907039.y"
    {
        if( (int)(yyvsp[(1) - (5)].intVal) ){
            cout<<"Inside If Block"<<(yyvsp[(1) - (5)].intVal)<<"\n";
        }
        else {
            printf("IF don't match\n");
        }
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 544 "1907039.y"
    { 
           printf("Inside else Block\n");
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 554 "1907039.y"
    {
                    if( (int)(yyvsp[(2) - (6)].intVal) ){
                        printf("Inside else if Block\n");
                    }
                    else {
                        printf("Else IF don't match\n");
                    } 
                ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 565 "1907039.y"
    {
                printf("initializer value %d, condition value %lf, inc/dec/operation value %lf\n",(yyvsp[(2) - (10)].intVal), (yyvsp[(4) - (10)].intVal), (yyvsp[(6) - (10)].intVal));
                int count = 0;
                printf("inside for loop");
                 	int i;
                    for(i= (yyvsp[(2) - (10)].intVal) ; i<= (yyvsp[(4) - (10)].intVal) ; i+=(yyvsp[(6) - (10)].intVal))
                    {
                        printf("Expression in for loop increasing %d\n",i);
                    } printf("\n");	 		
            ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 575 "1907039.y"
    {
                printf("range for loop\n");
                int rngs=(int)(yyvsp[(3) - (9)].intVal);
                int rnge=(int)(yyvsp[(5) - (9)].intVal);
                int index,count=0;
                for(index=rngs;index<=rnge;index++)
                {
                    count++;
                }
                printf("range for loop ran %d times \n",count);
            ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 588 "1907039.y"
    {
            (yyval.intVal) = varValue[(yyvsp[(1) - (1)].varName)];
        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 591 "1907039.y"
    {
            varValue[(yyvsp[(1) - (3)].varName)] = (yyvsp[(3) - (3)].intVal);
            (yyval.intVal) = (yyvsp[(3) - (3)].intVal);
        ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 595 "1907039.y"
    {
            (yyval.intVal) = varValue[(yyvsp[(3) - (3)].varName)];
        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 598 "1907039.y"
    {
            varValue[(yyvsp[(3) - (5)].varName)] = (yyvsp[(5) - (5)].intVal);
            (yyval.intVal) = (yyvsp[(5) - (5)].intVal);
        ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 607 "1907039.y"
    {
            varValue[(yyvsp[(1) - (3)].varName)] = (yyvsp[(3) - (3)].intVal);
            (yyval.intVal) = (yyvsp[(3) - (3)].intVal);
        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 611 "1907039.y"
    {
            varValue[(yyvsp[(3) - (5)].varName)] = (yyvsp[(5) - (5)].intVal);
            (yyval.intVal) = (yyvsp[(5) - (5)].intVal);
        ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 617 "1907039.y"
    {
                if((yyvsp[(2) - (6)].intVal))
                {
                    printf("while loop will be executed\n");

                }
                else {
                    printf("while loop wont be executed\n");
                }
         ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 629 "1907039.y"
    {
              printf("do while loop iteration\n");
            if((yyvsp[(6) - (7)].intVal))
            {
                printf("dowhile loop will be executed again\n");
            }
            else {
                printf("dowhile loop wont be executed again\n");
            }
        ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 641 "1907039.y"
    {
        maincase =(int)(yyvsp[(2) - (6)].intVal);
        cout<<"Inside switch statement with value"<<(yyvsp[(2) - (6)].intVal)<<endl;
     ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 649 "1907039.y"
    { 
            printf("default case from switch case");
        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 654 "1907039.y"
    {
            subcase =(int) (yyvsp[(3) - (6)].intVal);
            //printf("inside int case %d",$2);
            int ddd = maincase-subcase;
            if(ddd==-(yyvsp[(3) - (6)].intVal))
            {
            printf("%d matched",(yyvsp[(3) - (6)].intVal));
            }
        ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 663 "1907039.y"
    {
             subcase =(int) (yyvsp[(2) - (5)].intVal);
            //printf("inside int case %d",$2);
            int ddd = maincase-subcase;
            if(ddd==-(yyvsp[(2) - (5)].intVal))
            {
            printf("%d matched",(yyvsp[(2) - (5)].intVal));
            }
        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 676 "1907039.y"
    {
            printf("break is used\n");
        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 680 "1907039.y"
    {   
            printf("continue is used\n");
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2769 "1907039.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 687 "1907039.y"


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

