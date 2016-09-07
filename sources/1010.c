#include <stdio.h>

int main (void){

	// Variaveis

	int Q1=0,Q2=0;
	int ID1=0,ID2=0;
	float PRC1=0,PRC2=0;

	// Scanf

	scanf ("%d %d %f",&ID1,&Q1,&PRC1);
	scanf ("%d %d %f",&ID2,&Q2,&PRC2);

	printf ("VALOR A PAGAR: R$ %.2f\n",(Q1 * PRC1)+(Q2 * PRC2));

	return 0;
}