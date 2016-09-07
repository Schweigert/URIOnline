#include <iostream>
#include <stdio.h>
int main()
{
	int id_funcionario,horas_trabalhadas;
	float salario_por_hora;
	scanf("%d",&id_funcionario);
	scanf("%d",&horas_trabalhadas);
	scanf("%f",&salario_por_hora);
	printf("NUMBER = %d\n",id_funcionario);
	printf("SALARY = U$ %.2f\n",horas_trabalhadas*salario_por_hora);
	return 0;
}
