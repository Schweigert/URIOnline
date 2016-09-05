#include <stdio.h>

int main (void){

int cont = 1;

while (cont ++){

    if (cont/2.0 == (int)(cont/2))printf ("%d\n",cont);

    if (cont == 100) break;
}

return 0;
}
