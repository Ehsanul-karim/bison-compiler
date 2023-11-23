
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 116 "1907039.y"

    char *varName;
    char *varType;
    int intVal;
    float floatVal;
    char *stringVal;



/* Line 1676 of yacc.c  */
#line 133 "1907039.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


