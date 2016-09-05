#include <stdio.h>

int main (void){

    int cont = 0;
    int tab = 0;

    scanf ("%d",&tab);

    while (cont++ < 10){
        printf ("%d x %d = %d\n",cont,tab,tab*cont);
    }

    return 0;
}
