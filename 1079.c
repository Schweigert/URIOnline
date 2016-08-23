#include <stdio.h>

int main (void){

int cont;
float a,b,c;
scanf ("%d",&cont);

while (cont--){

    scanf ("%f %f %f",&a, &b, &c);

    printf ("%.1f\n",(a*2+b*3+c*5)/10);

}

return 0;
}