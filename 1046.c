#include <stdio.h>

int main(void)
{
	
	int x,y;
	
	scanf ("%d %d",&x,&y);
	
	if (x < y) printf ("O JOGO DUROU %d HORA(S)\n",y-x);
	if (x == y) printf ("O JOGO DUROU 24 HORA(S)\n");
	if (x > y) printf ("O JOGO DUROU %d HORA(S)\n",24-x +y);
	return 0;
}

