#include <stdio.h>

int main (void){

    int segundosLidos = 0;
    scanf ("%d", &segundosLidos);

    int segundos = 0;
    int minutos = 0;
    int horas = 0;

    segundos = segundosLidos%60;

    int minAux = (segundosLidos - segundos)/60;

    minutos = ((segundosLidos - segundos)/60)%60;

    horas = (minAux - minutos)/60;

    printf ("%d:%d:%d\n",horas, minutos, segundos);

    return 0;
}
