#include <stdio.h>

int main (void){
	
	int fibo = 0;
	scanf ("%d",&fibo);
	
	int V1 = 0;
	int V2 = 1;
	int aux = 0;
	
	if (fibo >= 1)
	printf ("0");
	if (fibo >= 2)
	printf (" 1");
	
	int contador = 2;
	
	for (contador = 3; contador <= fibo; contador ++){
		
		printf(" %d",V1 + V2);
		
		aux = V2;
		
		V2 = V1+V2;
		V1 = aux;
	}
	
	printf ("\n");

return 0;
}
