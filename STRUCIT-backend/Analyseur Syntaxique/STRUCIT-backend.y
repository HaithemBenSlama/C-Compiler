%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yywrap() {
        return 1;
}

%}

%token IDENTIFIER CONSTANT 
%token LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL
%token EXTERN
%token INT VOID
%token IF RETURN GOTO
%token LEFT_PAREN RIGHT_PAREN COMMA ADDRESS
%token PLUS MULTIPLY DIVIDE MINUS
%token GREATER_THAN LESS_THAN SEMICOLON ASSIGN COLON
%token LEFT_BRACE RIGHT_BRACE


%start program
%%

primary_expression
        : IDENTIFIER
        | CONSTANT
        ;

postfix_expression
        : primary_expression
        | postfix_expression LEFT_PAREN RIGHT_PAREN
        | postfix_expression LEFT_PAREN argument_expression_list RIGHT_PAREN
        ;

argument_expression_list
        : primary_expression
        | argument_expression_list COMMA primary_expression
        ;

unary_expression
        : postfix_expression
        | unary_operator primary_expression
        ;

unary_operator
        : ADDRESS
        | MULTIPLY
        | MINUS
        ;

multiplicative_expression
        : unary_expression
        | primary_expression MULTIPLY primary_expression
        | primary_expression DIVIDE primary_expression
        ;

additive_expression
        : multiplicative_expression
        | primary_expression PLUS primary_expression
        | primary_expression MINUS primary_expression
        ;

relational_expression
        : additive_expression
        | primary_expression LESS_THAN primary_expression
        | primary_expression GREATER_THAN primary_expression
        | primary_expression LESS_THAN_EQUAL primary_expression
        | primary_expression GREATER_THAN_EQUAL primary_expression
        ;

equality_expression
        : relational_expression
        | primary_expression EQUAL primary_expression
        | primary_expression NOT_EQUAL primary_expression
        ;

expression
        : equality_expression
        | unary_operator primary_expression ASSIGN primary_expression
        | primary_expression ASSIGN additive_expression
        ;

declaration
        : declaration_specifiers declarator SEMICOLON
        ;

declaration_specifiers
        : EXTERN type_specifier
        | type_specifier
        ;

type_specifier
        : VOID
        | INT
        ;

declarator
        : MULTIPLY direct_declarator
        | direct_declarator
        ;

direct_declarator
        : IDENTIFIER
        | direct_declarator LEFT_PAREN parameter_list RIGHT_PAREN
        | direct_declarator LEFT_PAREN RIGHT_PAREN
        ;

parameter_list
        : parameter_declaration
        | parameter_list COMMA parameter_declaration
        ;

parameter_declaration
        : declaration_specifiers declarator
        ;

statement
        : compound_statement
        | labeled_statement
        | expression_statement
        | selection_statement
        | jump_statement 
        ;

compound_statement
        : LEFT_BRACE RIGHT_BRACE
        | LEFT_BRACE statement_list RIGHT_BRACE
        | LEFT_BRACE declaration_list RIGHT_BRACE
        | LEFT_BRACE declaration_list statement_list RIGHT_BRACE
        ;

declaration_list
        : declaration
        | declaration_list declaration
        ;

statement_list
        : statement
        | statement_list statement
        ;

labeled_statement
        : IDENTIFIER COLON statement
        ;

expression_statement
        : SEMICOLON
        | expression SEMICOLON
        ;

selection_statement
        : IF LEFT_PAREN equality_expression RIGHT_PAREN GOTO IDENTIFIER SEMICOLON
        ;
jump_statement
        : RETURN SEMICOLON
        | RETURN expression SEMICOLON
        | GOTO IDENTIFIER SEMICOLON
        ;

program
        : external_declaration
        | program external_declaration
        ;

external_declaration
        : function_definition
        | declaration
        ;

function_definition
        : declaration_specifiers declarator compound_statement
        ;


%%

#include "lex.yy.c"
int main()
{
	yyin=fopen("exemple-strucit-backend.c","r");
	if(!yyparse())
		printf("\n Programme correct\n");
	else
		printf("\n Programme Incorrect\n");
	
	fclose(yyin);
	return 0;
}

void yyerror(char*s){
	printf("%s",s);
}
