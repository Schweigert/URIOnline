#include <stdio.h>

int main (void){
    int w,x,y,z;
    int d1,d2,h1,h2,m1,m2,s1,s2;
    long int Segs;
    scanf ("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);

    // Calcular Data
    Segs = (s2 + m2*60 + h2 * 3600 + d2 * 86400) - (s1 + m1*60 + h1 * 3600 + d1 * 86400);
    w = Segs/86400;
    x = (Segs%86400)/3600;
    y = ((Segs%86400)%3600)/60;
    z = ((Segs%86400)%3600)%60;
    printf ("%d dia(s)\n",w);
    printf ("%d hora(s)\n",x);
    printf ("%d minuto(s)\n",y);
    printf ("%d segundo(s)\n",z);

    return 0;
}