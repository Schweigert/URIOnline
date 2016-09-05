#include <stdio.h>

int main (void){

    int x;
    char a;
    float vet[12][12] = {0};

    scanf ("%d %c",&x, &a);

    int i,j;

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){

         scanf ("%f",&vet[i][j]);

        }
    }

    float resultado = 0;

    for (i = 0; i < 12; i++){
        resultado += vet[i][x];
    }

    if (a == 'S')printf ("%.1f\n",resultado);
    else printf("%.1f\n",resultado/12.0);



    return 0;
}