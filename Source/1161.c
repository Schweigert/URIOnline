#include <stdio.h>

unsigned long long int fat (unsigned long long u);

int main (void){
	
	int x, y = 0;
	
	while (scanf ("%i %i",&x,&y) != EOF){
		
		printf ("%llu\n",fat(x)+fat(y));
		
	}
	
return 0;
}

unsigned long long int fat (unsigned long long u){
	
	if (u == 0 || u == 1) return 1;
	return (u*fat(u-1));
	
}

