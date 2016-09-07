#include <stdio.h>

int main (void){
	int vet[20] = {0};
	
	int x,y;
	for (x = 0; x < 20; x++){
		
		scanf ("%d",&vet[x]);
		
	}
	
	int aux;
	
	for (x = 0, y = 19; x < 10;x++,y--){
		
		aux = vet[x];
		vet[x] = vet[y];
		vet[y] = aux;
		
	}
	
	for (x = 0; x < 20; x++){
		
		printf ("N[%d] = %d\n",x,vet[x]);
		
	}
	
	
	return 0;
}