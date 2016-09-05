#include <stdio.h>

int main (void){

    int x;
    char a;
    float vet[12][12] = {0};

    scanf ("%c",&a);

    int i,j;

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){

         scanf ("%f",&vet[i][j]);

        }
    }

    float resultado = 0;
    int g = 0;
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            if (j <= 10-i){ resultado += vet[i][j];vet[i][j]=0; g++;}
            //printf("  %.1f", vet[i][j]);
        }
        //printf("\n");
    }

    if (a == 'S')printf ("%.1f\n",resultado);
    else printf ("%.1f\n",resultado/g*1.0);



    return 0;
}
