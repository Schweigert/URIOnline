#include <stdio.h>

int main (void){

    int dias = 0;
    scanf ("%d", &dias);

    int dia;
    int mes;
    int ano;

    ano=dias / 365;
    mes=(dias % 365) / 30;
    dia=(dias % 365) % 30;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);


    return 0;
}
