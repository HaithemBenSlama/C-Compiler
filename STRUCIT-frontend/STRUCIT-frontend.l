D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*

%x mcomment
%{
#include <stdio.h>
#include "STRUCIT-frontend.tab.h"
int line_number = 1;
%}

%%
"else"                  { fprintf(yyout,"%s\t\t\tELSE\t\t\t%d\n",yytext,line_number);}
"extern"                { fprintf(yyout,"%s\t\t\tEXTERN\t\t\t%d\n",yytext,line_number);}
"for"                   { fprintf(yyout,"%s\t\t\tFOR\t\t\t%d\n",yytext,line_number);}
"if"                    { fprintf(yyout,"%s\t\t\tIF\t\t\t%d\n",yytext,line_number);}
"int"                   { fprintf(yyout,"%s\t\t\tINT\t\t\t%d\n",yytext,line_number);}
"void"                  { fprintf(yyout,"%s\t\t\tVOID\t\t\t%d\n",yytext,line_number);}
"return"                { fprintf(yyout,"%s\t\t\tRETURN\t\t\t%d\n",yytext,line_number);}
"struct"                { fprintf(yyout,"%s\t\t\tSTRUCT\t\t\t%d\n",yytext,line_number);}
"sizeof"                { fprintf(yyout,"%s\t\t\tSIZEOF\t\t\t%d\n",yytext,line_number);}
"while"                 { fprintf(yyout,"%s\t\t\tWHILE\t\t\t%d\n",yytext,line_number);}
"/*" {BEGIN(mcomment);}
<mcomment>\*\/ {BEGIN(INITIAL);}
<mcomment>"\n" {line_number++;}
<mcomment>. ;
{L}({L}|{D})*           { fprintf(yyout,"%s\t\t\tIDENTIFIER\t\t\t%d\n",yytext,line_number);}
{D}+              		{ fprintf(yyout,"%s\t\t\tCONSTANT\t\t\t%d\n",yytext,line_number);}
L?\"(\\.|[^\\"])*\"	    {fprintf(yyout,"%s\t\t\tSTRING_LITERAL\t\t\t%d\n",yytext,line_number);}

"+="                    {fprintf(yyout,"%s\t\t\tADD_ASSIGN\t\t\t%d\n",yytext,line_number);}
"-="                    {fprintf(yyout,"%s\t\t\tSUB_ASSIGN\t\t\t%d\n",yytext,line_number);}
"*="                    {fprintf(yyout,"%s\t\t\tMUL_ASSIGN\t\t\t%d\n",yytext,line_number);}
"/="                    {fprintf(yyout,"%s\t\t\tDIV_ASSIGN\t\t\t%d\n",yytext,line_number);}
"==" 		       { fprintf(yyout,"%s\t\t\tEQUAL\t\t\t%d\n",yytext,line_number);}
"!=" 		       { fprintf(yyout,"%s\t\t\tNOT_EQUAL\t\t\t%d\n",yytext,line_number);}
","		       { fprintf(yyout,"%s\t\t\tCOMMA\t\t\t%d\n",yytext,line_number);}
">="                   { fprintf(yyout,"%s\t\t\tGREATER_THAN_EQUAL\t\t\t%d\n",yytext,line_number);}
"<="                   { fprintf(yyout,"%s\t\t\tLESS_THAN_EQUAL\t\t\t%d\n",yytext,line_number);}
">"                    { fprintf(yyout,"%s\t\t\tGREATER_THAN\t\t\t%d\n",yytext,line_number);}
"<"                    { fprintf(yyout,"%s\t\t\tLESS_THAN\t\t\t%d\n",yytext,line_number);}
"+"                    { fprintf(yyout,"%s\t\t\tPLUS\t\t\t%d\n",yytext,line_number);}
"->"                   { fprintf(yyout,"%s\t\t\tARROW\t\t\t%d\n",yytext,line_number);}
"-"                    { fprintf(yyout,"%s\t\t\tMINUS\t\t\t%d\n",yytext,line_number);}
"//".*                 { /* ignore comments */ }
"*"                    { fprintf(yyout,"%s\t\t\tMULTIPLY\t\t\t%d\n",yytext,line_number);}
"/"                    { fprintf(yyout,"%s\t\t\tDIVIDE\t\t\t%d\n",yytext,line_number);}
"="		       { fprintf(yyout,"%s\t\t\tASSIGN\t\t\t%d\n",yytext,line_number);}
"&&" 		       { fprintf(yyout,"%s\t\t\tAND\t\t\t%d\n",yytext,line_number);}
"&" 		       { fprintf(yyout,"%s\t\t\tADDRESS\t\t\t%d\n",yytext,line_number);}
"||"                   { fprintf(yyout,"%s\t\t\tOR\t\t\t%d\n",yytext,line_number);}
";"                    { fprintf(yyout,"%s\t\t\tSEMICOLON\t\t\t%d\n",yytext,line_number);}
"("                    { fprintf(yyout,"%s\t\t\tLEFT_PAREN\t\t\t%d\n",yytext,line_number);}
")"                    { fprintf(yyout,"%s\t\t\tRIGHT_PAREN\t\t\t%d\n",yytext,line_number);}
"{"                    { fprintf(yyout,"%s\t\t\tLEFT_BRACE\t\t\t%d\n",yytext,line_number);}
"}"                    { fprintf(yyout,"%s\t\t\tRIGHT_BRACE\t\t\t%d\n",yytext,line_number);}
[\n]                   {line_number++;}
[ \t\v\f]*             { /* ignore whiteSpace */ }
.                        { printf("UNKNOWN, %s, %d\n", yytext, line_number); exit(2); }

%%


int main()
{
	yyin=fopen("exemple-strucit-frontend.c","r");
	yyout=fopen("output.txt","w");
	fprintf(yyout,"Lexeme\t\t\tToken\t\t\tLine Number\n");
	yylex();
	fclose(yyout);
	fclose(yyin);
	return 0;
}
