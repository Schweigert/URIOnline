#include <stdio.h>

int main (void){

int NumeroLido = 0;

// Ler X

scanf ("%d",&NumeroLido);

int numerosImpressos = 6;

// Verificar se X é Impar, Caso não, deixa-lo Impar;

if (NumeroLido/2 == NumeroLido/2.0) NumeroLido++;

while (numerosImpressos--){

printf ("%d\n",NumeroLido);
NumeroLido += 2;

}

return 0;
}