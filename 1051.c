#include <stdio.h>

int main (void){

    float Salario = 0;

    scanf ("%f",&Salario);

    float Imposto = 0;

    if (Salario <= 2000) printf ("Isento\n");
    else if (Salario > 2000 && Salario <= 3000){
            Salario -= 2000;
            Imposto = Salario*0.08;
    } else if (Salario > 3000 && Salario <= 4500){
            Salario -= 3000;
            Imposto = 1000*0.08;
            Imposto += Salario*0.18;
    } else if (Salario > 4500){
            Salario -= 4500;
            Imposto = 1000*0.08 + 1500*0.18;
            Imposto += Salario*0.28;
    }

    if (Imposto > 0) printf ("R$ %.2f\n",Imposto);


return 0;
}
