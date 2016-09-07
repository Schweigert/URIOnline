#include <stdio.h>

int main (void){
	
	float Nta1 = 0,Nta2 = 0;
	
	while (1){
		scanf ("%f",&Nta1);
		if (Nta1 >=0 && Nta1 <= 10)break;
		printf("nota invalida\n");
	}
	while (1){
		scanf ("%f",&Nta2);
		if (Nta2 >=0 && Nta2 <= 10)break;
		printf("nota invalida\n");
	}
	
	printf("media = %.2f\n",(Nta1+Nta2)/2);
	return 0;
}
