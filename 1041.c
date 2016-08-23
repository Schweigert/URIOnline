#include <stdio.h>

int main(void)
{
	float EixoX = 0, EixoY = 0;
	
	scanf ("%f %f",&EixoX,&EixoY);
	
	if (EixoX == 0 && EixoY == 0)
	printf ("Origem\n");
	if (EixoX > 0 && EixoY > 0)
	printf ("Q1\n");
	if (EixoX < 0 && EixoY > 0)
	printf ("Q2\n");
	if (EixoX < 0 && EixoY < 0)
	printf ("Q3\n");
	if (EixoX > 0 && EixoY < 0)
	printf ("Q4\n");
	if (EixoX == 0 && EixoY != 0)
	printf ("Eixo Y\n");
	if (EixoY == 0 && EixoX != 0)
	printf ("Eixo X\n");
	
	return 0;
}
