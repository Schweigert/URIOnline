#include <stdio.h>

int main (void){
	
	unsigned long long int casos = 0;
	scanf ("%llu", &casos);
	
	int a, b;
	
	while (casos--){
		
		scanf ("%d %d", &a, &b);
		printf ("%d\n", a+b);
		
	}
	return 0;
	
}
