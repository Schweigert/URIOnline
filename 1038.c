#include <stdio.h>

int main (void){


	int a, b;
	float valor;
	scanf ("%d %d",&a,&b);
	
	switch (a){
	case 1:
		valor = b*4;
	break;
	case 2:
		valor = b*4.5;
	break;
	case 3:
		valor = b*5;
	break;
	case 4:
		valor = b*2;
	break;
	case 5:
		valor = b*1.5;
		
	break;
	}
	
	printf ("Total: R$ %.2f\n",valor);


	return 0;
}
