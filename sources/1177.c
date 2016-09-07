#include <stdio.h>

int main (void){
	
	int x;
	
	scanf ("%d",&x);
	x--;
	int y = 1000;
	int z = 0;
	
	for (y = 0; y < 1000; y++){
		
		printf ("N[%d] = %d\n",y, z);
		z++;
		if (z > x) z = 0;
		
	}
	
	return 0;
}
