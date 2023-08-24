%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"


extern ComputeHS(int nid, int nfree);
extern LookupHS(int nid, int nfree);
extern SymbolTable();
extern ADDHT(int hscode);
extern PrintHStable();
extern yyerror(char *s);

%}

%%
"const"	return(TCONST);
"else"	return(TELSE);
"if"		return(TIF);
"int"		return(TINT);
"return"	return(TRETURN);
"void"	return(TVOID);
"while"	return(TWHILE);

"=="		return(TEQUAL);
"!="		return(TNOTEQU);
"<"		return(TLESS);
">"		return(TGREAT);
"<="		return(TLESSE);
">="		return(TGREATE);
"&&"		return(TAND);
"||"		return(TOR);
"++"		return(TINC);
"--"		return(TDEC);
"!"		return(TNOT);

"*"		return(TSTAR);
"/"		return(TSLASH);
"%"		return(TMOD);
"+"		return(TPLUS);
"-"		return(TMINUS);

"="		return(TASSIGN);
"+="		return(TADDASSIGN);
"-="		return(TSUBASSIGN);
"*="		return(TMULASSIGN);
"/="		return(TDIVASSIGN);
"%="		return(TMODASSIGN);
"("		return(TLPAREN);
")"		return(TRPAREN);
"{"		return(TLBRACE);
"}"		return(TRBRACE);
"["		return(TLBRACKET);
"]"		return(TRBRACKET);
","		return(TCOMMA);
";"		return(TSEMI);



[A-Za-z_][A-Za-z0-9_]*	{ if(yyleng > MAX_LEN) {err = illid_long;PrintError(err);return(TERROR);}
			else {SymbolTable();return(TIDENT);} 
			}
[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?	return(TNUMBER);
"/*"([^*]|\*+[^*/])*\**"*"	{ for(int i =0;i<<yyleng;i++)  if(yytext[i] =='\n' || yytext[i] =='\r') cLine++; return(TCOMMENT); }				;
"//".*			return(TCOMMENT);   //주석
[ \t] ;
"\n"		{cLine++;return(TCARR);} 
[0-9]+[A-Za-z0-9_]+  { err = illid_digit; PrintError(err);return(TERROR);}
.		{ err = illid_illch; PrintError(err);return(TERROR);}
%%

int yywrap() {
	return 1;
}

