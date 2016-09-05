#include <stdio.h>

// Problema 1012
// Marlon Henry Schweigert

int main (void){

    double _A = 0;
    double _B = 0;
    double _C = 0;

    scanf ("%lf %lf %lf",&_A,&_B,&_C);


    printf ("TRIANGULO: %.3lf\n",_A*_C/2);
    printf ("CIRCULO: %.3lf\n",_C*_C*3.14159);
    printf ("TRAPEZIO: %.3lf\n",((_A+_B)*_C)/2);
    printf ("QUADRADO: %.3lf\n",_B*_B);
    printf ("RETANGULO: %.3lf\n",_A*_B);

return 0;
}
