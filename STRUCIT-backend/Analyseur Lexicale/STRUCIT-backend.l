D                       [0-9]
L                       [a-zA-Z_]


%x mcomment
%{
#include <stdio.h>

int line_number = 1;
%}

%%
"extern"                { fprintf(yyout,"%s\t\t\tEXTERN\t\t\t%d\n",yytext,line_number); }
"int"                   { fprintf(yyout,"%s\t\t\tINT\t\t\t%d\n",yytext,line_number); }
"void"                  { fprintf(yyout,"%s\t\t\tVOID\t\t\t%d\n",yytext,line_number); }
"goto"                  { fprintf(yyout,"%s\t\t\tGOTO\t\t\t%d\n",yytext,line_number); }
"if"                    { fprintf(yyout,"%s\t\t\tIF\t\t\t%d\n",yytext,line_number); }
"return"                { fprintf(yyout,"%s\t\t\tRETURN\t\t\t%d\n",yytext,line_number); }


"/*" {BEGIN(mcomment);}
<mcomment>\*\/ {BEGIN(INITIAL);}
<mcomment>"\n" {line_number++;}
<mcomment>. ;
{L}({L}|{D})*           { fprintf(yyout,"%s\t\t\tIDENTIFIER\t\t\t%d\n",yytext,line_number); }
{D}+               	{ fprintf(yyout,"%s\t\t\tCONSTANT\t\t\t%d\n",yytext,line_number); }

"==" 		       { fprintf(yyout,"%s\t\t\tEQUAL\t\t\t%d\n",yytext,line_number); }
"!=" 		       { fprintf(yyout,"%s\t\t\tNOT_EQUAL\t\t\t%d\n",yytext,line_number); }
","		       { fprintf(yyout,"%s\t\t\t COMMA \t\t\t%d\n",yytext,line_number); }
">="                   { fprintf(yyout,"%s\t\t\tGREATER_THAN_EQUAL\t\t\t%d\n",yytext,line_number); }
"<="                   { fprintf(yyout,"%s\t\t\tLESS_THAN_EQUAL\t\t\t%d\n",yytext,line_number); }
">"                    { fprintf(yyout,"%s\t\t\tGREATER_THAN\t\t\t%d\n",yytext,line_number); }
"<"                    { fprintf(yyout,"%s\t\t\tLESS_THAN\t\t\t%d\n",yytext,line_number); }
"+"                    { fprintf(yyout,"%s\t\t\tPLUS\t\t\t%d\n",yytext,line_number); }
"-"                    { fprintf(yyout,"%s\t\t\tMINUS\t\t\t%d\n",yytext,line_number); }
"*"                    { fprintf(yyout,"%s\t\t\tMULTIPLY\t\t\t%d\n",yytext,line_number); }
"/"                    { fprintf(yyout,"%s\t\t\tDIVIDE\t\t\t%d\n",yytext,line_number); }
"="		       { fprintf(yyout,"%s\t\t\tASSIGN\t\t\t%d\n",yytext,line_number); }
"&" 		       { fprintf(yyout,"%s\t\t\tADDRESS\t\t\t%d\n",yytext,line_number); }
";"                    { fprintf(yyout,"%s\t\t\tSEMICOLON\t\t\t%d\n",yytext,line_number);}
"("                    { fprintf(yyout,"%s\t\t\tLEFT_PAREN\t\t\t%d\n",yytext,line_number);}
")"                    { fprintf(yyout,"%s\t\t\tRIGHT_PAREN\t\t\t%d\n",yytext,line_number);}
"{"                    { fprintf(yyout,"%s\t\t\tLEFT_BRACE\t\t\t%d\n",yytext,line_number); }
"}"                    { fprintf(yyout,"%s\t\t\tRIGHT_BRACE\t\t\t%d\n",yytext,line_number); }
":"                    { fprintf(yyout,"%s\t\t\tCOLON\t\t\t%d\n",yytext,line_number); }
[\n]                   {line_number++;}
[ \t\v\f]*             { /* ignore whiteSpace */ }
.                        { printf("UNKNOWN, %s, %d\n", yytext, line_number); }

%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin=fopen("exemple-strucit-backend.c","r");
	yyout=fopen("output.txt","w");
	fprintf(yyout,"Lexeme\t\t\tToken\t\t\tLine Number\n");
	yylex();
	fclose(yyout);
	fclose(yyin);
	return 0;
}
