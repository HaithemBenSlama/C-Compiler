%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<malloc.h>
	#include<string.h>
%}

D                       [0-9]
L                       [a-zA-Z_]

%%
"else"                  { return ELSE ;}
"extern"                { return EXTERN;}
"for"                   { return FOR;}
"if"                    { return IF;}
"int"                   { return INT;}
"void"                  { return VOID;}
"return"                { return RETURN;}
"struct"                { return STRUCT;}
"sizeof"                { return SIZEOF;}
"while"                 { return WHILE;}
{L}({L}|{D})*           { return IDENTIFIER;}
{D}+              	{ return CONSTANT;}
L?\"(\\.|[^\\"])*\"	{ return STRING_LITERAL;}

"+="                    { return ADD_ASSIGN;}
"-="                    { return SUB_ASSIGN;}
"/="                    { return DIV_ASSIGN;}
"==" 		       { return EQUAL;}
"!=" 		       { return NOT_EQUAL;}
","		       { return COMMA;}
">="                   { return GREATER_THAN_EQUAL;}
"<="                   { return LESS_THAN_EQUAL;}
">"                    { return GREATER_THAN;}
"<"                    { return LESS_THAN;}
"+"                    { return PLUS;}
"->"                   { return ARROW;}
"-"                    { return MINUS;}
"//".*                 {;}
"*"                    { return MULTIPLY;}
"/"                    { return DIVIDE;}
"="		       { return ASSIGN;}
"&&" 		       { return AND;}
"&" 		       { return ADDRESS;}
"||"                   { return OR;}
";"                    { return SEMICOLON;}
"("                    { return LEFT_PAREN;}
")"                    { return RIGHT_PAREN;}
"{"                    { return LEFT_BRACE;}
"}"                    { return RIGHT_BRACE;}
[\n]                   {;}
[ \t\v\f]*             {;}
.                      {;}

%%

