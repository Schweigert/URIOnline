#include <stdio.h>

int main (void){

    int a,b,c;

    scanf ("%d",&a);

    while (a--){

        scanf ("%d %d", &b, &c);

        if (b%2 == 0) b++;

        int d = 0;

        while (c--){

            d += b;
            b++;
            b++;

        }

        printf ("%d\n", d);

    }

    return 0;
}