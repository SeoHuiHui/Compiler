/*
 * glob.h - global variable for the project
 */
#define STsize 1000
#define HTsize 100
#define FALSE 0
#define TRUE 1
#define MAX_LEN		12


typedef struct HTentry *HTpointer;

typedef struct HTentry {
	int index;
	int type;
	int cLine;
	HTpointer next;
} HTentry;

HTpointer HT[HTsize];
HTpointer look_id;
HTpointer look_tmp;

char ST[STsize];

int nextid; 
int nextfree;
int hashcode; 
int sameid;
int yyleng;
char* yytext;


int num_err;//number of errors
int cLine;
//int i, j, cErrors; //?
int found;

enum errorTypes { noerror, illid_digit, illid_long, illid_illch, illid_illegal, overst, 
			miss_semi, no_comm, func_head, close_brac, mid_brac, lar_brac, param_spec, 
			dec_err, no_con, ill_end, wrong_st, wrong_assign};
typedef enum errorTypes ERRORtypes;
ERRORtypes err;


