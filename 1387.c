#include <stdio.h>

int main()
{
	int d,e,s;
	
	
	do{
		scanf("%d %d", &d,&e);		
		s = d+e;
		if (s != 0){
		printf("%d\n",s);	
		}
		
			
	}while(d != 0 && e != 0);	
	return 0;
}