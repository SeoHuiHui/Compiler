/*
 * Symbol.c - Symbol table management
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"




void PrintHStable()
{
	HTpointer here;
	int i, j;

	printf("\n\t\t\t\t***HASH TABLE***\n");
	printf("==================================================================================\n");

	for (i = 0; i < HTsize; i++) {
		if (HT[i] != NULL)
		{
			here = HT[i];
			do {
				printf("\tHash Code%4d : (", i);
				for (j = here->index; ST[j] != '\0'; j++) printf("%c", ST[j]);
				printf(" : ");

				switch (here->type) {
					//int variable
				case 1: printf("integer scalar variable, line%d)\n", here->cLine); break;
					//void variable
				case 2: printf("void scalar variable, line%d)\n", here->cLine); break;
					//array(int) variable
				case 3: printf("array integer variable, line%d)\n", here->cLine); break;
					//void function
				case 4: printf("function, return type=void, line%d)\n", here->cLine); break;
					//not define
				case 5: printf("not defined identifier/function, line%d)\n", here->cLine); break;
					//int function
				case 8: printf("function, return type=int, line%d)\n", here->cLine); break;
					//int scalar parameter
				case 10: printf("integer scalar parameter, line%d)\n", here->cLine); break;
				default: printf("identifier about parse error, line%d)\n", here->cLine); break;
				}
				here = here->next;
			} while (here != NULL);
		}



	}
	printf("==================================================================================\n");


}

/*
 * computeHS() - Compute the hash code of identifier by summing the ordinal values of 
 *             its charactors an then taking the sum modulo the size of HT
 */


void ComputeHS(int nid, int nfree)
{
	int i, func = 0;
	for (i = nid; i < nfree - 1; i++) {
		func += (int)ST[nid++];
	}
	hashcode = func % HTsize;
}

/*
 * LookupHS() - For each identifier, Look it up in the hashtable for previous occurrence
 *              of the identifier. If fine a match, set the found flag as true. Otherwise flase.
 *              If fine a match, save the starting index of ST in same id
 */
void LookupHS(int nid, int hscode)
{
	HTpointer here;
	int i, j;
	found = FALSE;

	//비어있지 않으면
	if (HT[hscode] != NULL) {
		here = HT[hscode];
		while (here != NULL && found == FALSE) {
			found = TRUE;
			i = here->index;
			j = nid;
			sameid = i;
			while (ST[i] != '\0' && ST[j] != '\0' && found == TRUE) {
				if (ST[i] != ST[j]) found = FALSE;
				else {
					i++;
					j++;
				}
			}
			here = here->next;

		}
	}
}

/*
 * ADDHT() - Add a new identifier to the hash table.
 *           If list head ht[hashcode] is null, simply add a list element with
 *			 starting index of the identifier in ST.
 *           If list head is not a null, it adds a new identifier to the head of the chain
 */
void ADDHT(int hscode)
{
	HTpointer tmp;

	if (HT[hscode] == NULL) {
		tmp = (HTpointer)malloc(sizeof(struct HTentry));
		tmp->type = 0;
		tmp->next = NULL;
		tmp->cLine = cLine;
		HT[hscode] = tmp;
		tmp->index = nextid;
	}
	else {
		tmp = (HTpointer)malloc(sizeof(struct HTentry));
		tmp->type = 0;
		tmp->index = nextid;
		tmp->next = HT[hscode];
		tmp->cLine = cLine;
		HT[hscode] = tmp;
	}
	look_id = tmp;

}



/*
 * SymbolTable() - If read the identifier, symbol table management 
 */
int SymbolTable()
{

	nextid = nextfree;

	err = noerror;
	if((nextfree == STsize) || ((nextfree+yyleng) > STsize)) {
		err = overst;
		PrintError(err);
	}

	//READ identifier
	for (int i = 0; i<yyleng; i++) {
		ST[nextfree++] = yytext[i];
	}
	ST[nextfree++] = '\0';

	ComputeHS(nextid, nextfree);
	LookupHS(nextid, hashcode);

	if (!found) {
		
		ADDHT(hashcode);
		
	}
	else {
	
		
		nextfree = nextid;
	}
	

}

