#include <stdio.h>

int main (void){

    int cont = 100;
    int Atual = 0,Posi = 0,Maior = 0,Aux = 0;



    while (cont--){
    Aux ++;
        scanf ("%d",&Atual);
        if (Atual > Maior){
            Posi = Aux;
            Maior = Atual;
        }

    }

    printf ("%d\n%d\n",Maior,Posi);

return 0;
}
