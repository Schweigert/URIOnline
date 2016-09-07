#include <stdio.h>


int NumeroDivisoresInteiros (int num);

int main(void) {


    int a;
    int b;
    scanf ("%d",&a);




    while (a--){

        scanf ("%d", &b);

       if (NumeroDivisoresInteiros(b) > 2) printf ("%d nao eh primo\n",b);
        else if (b == 1)  printf ("%d nao eh primo\n",b);
        else printf ("%d eh primo\n",b);
    }


    return 0;

}


int NumeroDivisoresInteiros (int num){

int cont = num;
int divs = 0;
    cont++;
    if (cont < 0) cont *= -1;
    while (cont--){

        if (!cont) break;

        if (num%cont == 0)divs++;


    }

    return divs;
}