#include <stdio.h>

int main(void){
	
	int t1[5] = {0},t2[5] = {0};
	
	scanf ("%d %d %d %d %d", &t1[0],&t1[1],&t1[2],&t1[3],&t1[4]);
	scanf ("%d %d %d %d %d", &t2[0],&t2[1],&t2[2],&t2[3],&t2[4]);
	
	if (t1[0] != t2[0] && t1[1] != t2[1] && t1[2] != t2[2] && t1[3] != t2[3] && t1[4] != t2[4]){
	
		puts ("Y");
	
	}
	
	else puts ("N");
	
	return 0;
}
