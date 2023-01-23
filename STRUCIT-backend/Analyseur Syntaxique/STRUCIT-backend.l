%x mcomment
%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<malloc.h>
	#include<string.h>

%}
D                       [0-9]
L                       [a-zA-Z_]

%%
"extern"                { EXTERN; }
"int"                   { INT; }
"void"                  { VOID; }
"goto"                  { GOTO; }
"if"                    { IF; }
"return"                { RETURN; }


"/*" {BEGIN(mcomment);}
<mcomment>\*\/ {BEGIN(INITIAL);}
<mcomment>. ;
{L}({L}|{D})*           { IDENTIFIER;}
{D}+               	{ CONSTANT; }

"==" 		       { EQUAL; }
"!=" 		       { NOT_EQUAL; }
","		       { COMMA; }
">="                   { GREATER_THAN_EQUAL; }
"<="                   { LESS_THAN_EQUAL; }
">"                    { GREATER_THAN; }
"<"                    { LESS_THAN; }
"+"                    { PLUS; }
"-"                    { MINUS; }
"*"                    { MULTIPLY; }
"/"                    { DIVIDE; }
"="		       { ASSIGN; }
"&" 		       { ADDRESS; }
";"                    { SEMICOLON;}
"("                    { LEFT_PAREN;}
")"                    { RIGHT_PAREN;}
"{"                    { LEFT_BRACE; }
"}"                    { RIGHT_BRACE; }
":"                    { COLON; }
[\n]                   {;}
[ \t\v\f]*             {;}
.                        { printf("UNKNOWN"); }

%%

