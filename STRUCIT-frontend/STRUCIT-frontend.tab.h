/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_STRUCIT_FRONTEND_TAB_H_INCLUDED
# define YY_YY_STRUCIT_FRONTEND_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    ARROW = 261,                   /* ARROW  */
    LESS_THAN_EQUAL = 262,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 263,      /* GREATER_THAN_EQUAL  */
    EQUAL = 264,                   /* EQUAL  */
    NOT_EQUAL = 265,               /* NOT_EQUAL  */
    LESS_THAN = 266,               /* LESS_THAN  */
    GREATER_THAN = 267,            /* GREATER_THAN  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    DIV_ASSIGN = 270,              /* DIV_ASSIGN  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    EXTERN = 273,                  /* EXTERN  */
    INT = 274,                     /* INT  */
    VOID = 275,                    /* VOID  */
    STRUCT = 276,                  /* STRUCT  */
    SIZEOF = 277,                  /* SIZEOF  */
    IF = 278,                      /* IF  */
    ELSE = 279,                    /* ELSE  */
    WHILE = 280,                   /* WHILE  */
    FOR = 281,                     /* FOR  */
    RETURN = 282,                  /* RETURN  */
    LEFT_PAREN = 283,              /* LEFT_PAREN  */
    RIGHT_PAREN = 284,             /* RIGHT_PAREN  */
    LEFT_BRACE = 285,              /* LEFT_BRACE  */
    RIGHT_BRACE = 286,             /* RIGHT_BRACE  */
    COMMA = 287,                   /* COMMA  */
    SEMICOLON = 288,               /* SEMICOLON  */
    ADDRESS = 289,                 /* ADDRESS  */
    PLUS = 290,                    /* PLUS  */
    ASSIGN = 291,                  /* ASSIGN  */
    DIVIDE = 292,                  /* DIVIDE  */
    MULTIPLY = 293,                /* MULTIPLY  */
    MINUS = 294                    /* MINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_STRUCIT_FRONTEND_TAB_H_INCLUDED  */
