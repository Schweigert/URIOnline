#include <stdio.h>


int main (void){

    int a;
    int cont = 5;
    int Posi = 0,Nega = 0,Par = 0,Impar = 0;
    while (cont--){
        scanf("%d",&a);
        if (a/2 == a/2.0)Par ++;
        else Impar ++;
        if (a > 0) Posi ++;
        if (a < 0) Nega ++;
    }

    printf ("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",Par,Impar,Posi,Nega);

return 0;
}
