#include <stdio.h>

int main(void) {


    int a,b;

    for (a = 0; a < 10; a++){

        scanf ("%d",&b);
        if (b <= 0) b = 1;
        printf ("X[%d] = %d\n",a,b);

    }

    return 0;
}
