#include <stdio.h>

int main (void){

	// Variaveis

	char _nome[100];
	double _valor1 = 0;
	double _valor2 = 0;
	double _Salario = 0;

	// Escanear 

	scanf ("%s",&_nome);
	scanf ("%lf",&_valor1);
	scanf ("%lf",&_valor2);

	// Processar
	_Salario += _valor1;
	_Salario += _valor2*0.15;

	//Impressao
	printf ("TOTAL = R$ %.2lf\n",_Salario);

	return 0;
}