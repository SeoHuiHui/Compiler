/*
 * error.c - error 출력
 * parser에서 필요한 에러 메세지 추가
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"

extern char* yytext;
extern yylex();

void yyerror(char* s)
{
	//printf("%s\n", s);
	//num_err++;
}


void PrintError(ERRORtypes err)
{
	switch (err)
	{
	case noerror:
		break;
	case illid_digit:
		num_err++;
		printf("%6d	  %-10s	start with digit\n", cLine, yytext);
		break;
	case illid_long:
		num_err++;
		printf("%6d   %-13s	too long identifier\n", cLine, yytext);
		break;
	case illid_illch:
		num_err++;
		printf("%6d   %-5c	illegal symbol\n", cLine, yytext[0]);
		break;
	case illid_illegal:
		num_err++;
		printf("%6d   %-5s	illegal identifier\n", cLine, yytext);
		break;
	case overst:
		num_err++;
		printf("\nError : OVERFLOW in ST\n");
		exit(0);
		break;
		//parser 에러 추가
	case miss_semi:
		num_err++;
		printf("%6d		Missing semicolon\n", cLine);
		break;
	case no_comm:
		num_err++;
		printf("%6d		Missing comma\n", cLine);
		break;
	case func_head:
		num_err++;
		printf("%6d		No function header\n", cLine);
		break;
	case close_brac:
		num_err++;
		printf("%6d		Not closed small bracket\n", cLine);
		break;
	case mid_brac:
		num_err++;
		printf("%6d		Not closed medium bracket\n", cLine);
		break;
	case lar_brac:
		num_err++;
		printf("%6d		Not closed large bracket\n", cLine);
		break;
	case param_spec:
		num_err++;
		printf("%6d		No param spec\n", cLine);
		break;
	case dec_err:
		num_err++;
		printf("%6d		Declaring error: Use equal sign\n", cLine);
		break;
	case no_con:
		num_err++;
		printf("%6d		No condition\n", cLine);
		break;
	case ill_end:
		num_err++;
		printf("%6d		Illegal end\n", cLine);
		break;
	case wrong_st:
		num_err++;
		printf("%6d		Wrong statement\n", cLine);
		break;
	case wrong_assign:
		num_err++;
		printf("%6d		Wrong assignment\n", cLine);
		break;
	}
}
