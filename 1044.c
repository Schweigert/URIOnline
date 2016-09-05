#include <stdio.h>

int main(void)
{
	
	int _a, _b;
	
	scanf ("%d %d",&_a,&_b);
	
	if (_a%_b == 0 || _b%_a == 0)	printf ("Sao Multiplos\n");
	else printf ("Nao sao Multiplos\n");
	
	return 0;
}

