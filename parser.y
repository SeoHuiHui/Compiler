%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include "glob.h"


extern yylex();
extern void yyerror(char *s);


int identifier;
int identifier_type;
%}

%token TIDENT TNUMBER TCONST TELSE TIF TINT TRETURN TVOID TWHILE TCOMMENT TERROR TCARR //?ëŸ¬, ?¼ì¸ì¶”ê?
%token TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN TASSIGN TOR TAND TNOTEQU TEQUAL TNOT TGREAT TLESS TLESSE TGREATE TINC TDEC
%token TPLUS TMINUS 
%token TSTAR TSLASH TMOD
%token TLPAREN TRPAREN TCOMMA TLBRACE TRBRACE TLBRACKET TRBRACKET TSEMI

%left TPLUS TMINUS
%left TSTAR TSLASH TMOD
%nonassoc LOWER_THAN_ELSE
%nonassoc TELSE
%nonassoc TIF_ERROR TIF_CONDITION_ERROR
%nonassoc TELSE_ERROR TELSE_CONDITION_ERROR


%%
mini_c 			: translation_unit	;			
translation_unit 		: external_dcl					
				| translation_unit external_dcl	;	
external_dcl 		: function_def					
		  		| declaration	
				| TIDENT  TSEMI
				|TIDENT error {
					yyerrok; 
					err = miss_semi; PrintError(err); return(TERROR); //TERROR ë¦¬í„´? 
				}
				;	//?˜ì •			
function_def 		: function_header compound_st
				
				| error compound_st {
					yyerrok; 
					err = func_head; PrintError(err); return(TERROR); 
				}
				;
function_header 		: dcl_spec function_name formal_param	;
dcl_spec 			: dcl_specifiers			;
dcl_specifiers 		: dcl_specifier					
		 		| dcl_specifiers dcl_specifier	;
dcl_specifier 		: type_qualifier					
				| type_specifier			;
type_qualifier 		: TCONST		;
type_specifier 		: TINT		{identifier_type = 1;}			
		 		| TVOID		{identifier_type = 2; }	;   //?˜ì •	
function_name 		: TIDENT		
					{ 

					if(look_id -> type == 0|look_id -> type == 6){
					
						if(identifier_type == 2){
							look_id -> type = 4; //function return void
						}else if(identifier_type == 1){
							look_id -> type = 8; //function return int					
						}

						identifier_type = 0;
						look_tmp = look_id;
						}
					};

formal_param 		: TLPAREN opt_formal_param TRPAREN 			
				| TLPAREN opt_formal_param error {
					yyerrok;
					err = close_brac; PrintError(err); return(TERROR); 
				};
opt_formal_param 		: formal_param_list				
		   		|		;
formal_param_list 	: param_dcl						
		    		| formal_param_list TCOMMA param_dcl 	;
				/*| formal_param_list param_dcl {
					yyerrok; identifier_type =0; 
					err = no_comm; PrintError(err); return(TERROR); } 
				;*/
param_dcl 			: dcl_spec declarator	
				| declarator {
					 if(identifier_type == 1){ /* intë¡??¤ì •??ê²½ìš° */
                        look_id->type = 10;  /* integer scalar parameter */
						}
						identifier_type = 0;
				}
				;
compound_st 		: TLBRACE opt_dcl_list opt_stat_list TRBRACE	
			;

opt_dcl_list 		: declaration_list				
				|;
declaration_list 		: declaration					
				| declaration_list declaration 			;
declaration 		: dcl_spec init_dcl_list TSEMI
				|  dcl_spec init_dcl_list error {
					yyerrok; look_tmp -> type =0;
					err = miss_semi; PrintError(err); return(TERROR);
				};
init_dcl_list 		: init_declarator				
				| init_dcl_list TCOMMA init_declarator 
				| init_dcl_list TCOMMA error {
					yyerrok; identifier_type =0;
					err = miss_semi; PrintError(err); return(TERROR);
				};  //?˜ì •
init_declarator 		: declarator
				| declarator TEQUAL TNUMBER {
					yyerrok; identifier_type =0; 
					err = dec_err; PrintError(err); return(TERROR); }
				| declarator TASSIGN TNUMBER			;
declarator 			: TIDENT	{ 
					if(look_id -> type == 0){	
						
						if(identifier_type == 1){
                              look_id->type=1; /* integer scalar variable */
                        }else if(identifier_type == 2){
                              look_id->type=2; /* void scalar variable */   
						}
					}				
					look_tmp=look_id;
					}

	     			| TIDENT TLBRACKET opt_number TRBRACKET	{  
						if(look_id->type==0){
                        if(identifier_type == 1)look_id->type=3; /* array integer variable */ 
						}

						look_tmp = look_id;
						}
					| TIDENT TLBRACKET opt_number error	{
					yyerrok;
					err = lar_brac; PrintError(err); return(TERROR);
					}
					;
opt_number 			: TNUMBER					
	     			|						;
opt_stat_list 		: statement_list	
		 		|						;
statement_list 		: statement					
                        | statement_list declaration
		 		| statement_list statement
				;
statement 			: compound_st				
	   			| expression_st				
	   			| if_st 					
	   			| while_st					
	   			| return_st				
	   			;
expression_st    		: opt_expression TSEMI            
      			| expression error   {
					yyerrok; 
					err = miss_semi; PrintError(err); return(TERROR);
				};
opt_expression    	: expression               
          			|                 ;
if_st          		: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE   
         			| TIF TLPAREN TRPAREN statement %prec TIF_CONDITION_ERROR {
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); }				
         			| TIF TLPAREN expression error statement %prec TIF_ERROR {
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); }
        			| TIF TLPAREN expression TRPAREN statement TELSE statement      
       			| TIF TLPAREN TRPAREN statement TELSE statement %prec TELSE_CONDITION_ERROR { 
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); }					
         			| TIF TLPAREN expression error statement TELSE statement %prec TELSE_ERROR {
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); }
			| TIF TLPAREN TRPAREN error %prec TIF_ERROR { 
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); }	
          			;
while_st       		: TWHILE TLPAREN expression TRPAREN statement       
      			| TWHILE TLPAREN expression error statement {
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); }
      			| TWHILE TLPAREN TRPAREN statement      {
					yyerrok; 
					err = no_con; PrintError(err); return(TERROR); }
      			;      
return_st       		: TRETURN opt_expression TSEMI      
         			| TRETURN opt_expression error {
					yyerrok; identifier_type = 0;
					err = miss_semi; PrintError(err); return(TERROR); } ;
expression       		: assignment_exp            ;
assignment_exp    	: logical_or_exp            
         			| unary_exp TASSIGN assignment_exp       
         			| unary_exp TADDASSIGN assignment_exp    
         			| unary_exp TSUBASSIGN assignment_exp    
         			| unary_exp TMULASSIGN assignment_exp    
         			| unary_exp TDIVASSIGN assignment_exp    
         			| unary_exp TMODASSIGN assignment_exp 
			| unary_exp TASSIGN error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }  
			| unary_exp TADDASSIGN error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); } 
			| unary_exp TSUBASSIGN error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); } 
			| unary_exp TMULASSIGN error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); } 
			| unary_exp TDIVASSIGN error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); } 
			| unary_exp TMODASSIGN  error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); } 
         			;
logical_or_exp    	: logical_and_exp            
         			| logical_or_exp TOR logical_and_exp    
			
			;
logical_and_exp    	: equality_exp               
          			| logical_and_exp TAND equality_exp  
			
			
			;
equality_exp       	: relational_exp            
         			| equality_exp TEQUAL relational_exp    
         			| equality_exp TNOTEQU relational_exp
			| equality_exp TEQUAL error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			| equality_exp TNOTEQU error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			 ;
relational_exp    	: additive_exp             
         			| relational_exp TGREAT additive_exp       
         			| relational_exp TLESS additive_exp       
         			| relational_exp TGREATE additive_exp    
         			| relational_exp TLESSE additive_exp
			| relational_exp TGREAT error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			| relational_exp TLESS error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			| relational_exp TGREATE error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			| relational_exp TLESSE error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
			;
additive_exp       	: multiplicative_exp            
         			| additive_exp TPLUS multiplicative_exp    
         			| additive_exp TPLUS       error      {
					yyerrok; 
					err = ill_end; PrintError(err); return(TERROR); }
         			| additive_exp TMINUS multiplicative_exp    
         			| additive_exp TMINUS       error      {
					yyerrok; 
					err = ill_end; PrintError(err); return(TERROR); };
multiplicative_exp    	: unary_exp               
             		| multiplicative_exp TSTAR unary_exp       
             		| multiplicative_exp TSLASH unary_exp       
             		| multiplicative_exp TMOD unary_exp       
		| multiplicative_exp TSTAR error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
		| multiplicative_exp TSLASH error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
		| multiplicative_exp TMOD error {
				yyerrok; 
				err = ill_end; PrintError(err); return(TERROR); }
		;
unary_exp       		: postfix_exp               
            		| TMINUS unary_exp            
            		| TNOT unary_exp            
            		| TINC unary_exp            
            		| TDEC unary_exp            ;
postfix_exp       	: primary_exp   
               		| postfix_exp TLBRACKET expression TRBRACKET
               		| postfix_exp TLBRACKET expression error   {
					yyerrok; 
					err = lar_brac; PrintError(err); return(TERROR); }
               		| postfix_exp TLPAREN opt_actual_param TRPAREN    
               		| postfix_exp TINC            
               		| postfix_exp TDEC            ;
opt_actual_param    	: actual_param            
           			|            ;
actual_param       	: actual_param_list            ;
actual_param_list    	: assignment_exp            
            		| actual_param_list TCOMMA assignment_exp    ;
primary_exp       	: TIDENT        { if(look_id -> type == 0) look_id ->type = 5;} /* not defined identifier/function */
              		| TNUMBER               
              		| TLPAREN expression TRPAREN
         			| TLPAREN expression error         {
					yyerrok; 
					err = close_brac; PrintError(err); return(TERROR); };            
%%