#include <stdio.h>

int  main(void){

    int _a = 0, _b = 0, _c = 0, _maior = 0;

    scanf ("%d %d %d",&_a,&_b,&_c);


    // Calcular o Maior

    _maior = (_a+_b+ abs(_a-_b))/2;
    _maior = (_maior+_c+ abs(_maior-_c))/2;

    printf ("%d eh o maior\n",_maior);

    return 0;
}
