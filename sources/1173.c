#include <stdio.h>

/*
N[0] = 1
N[1] = 2
N[2] = 4
*/
void EncadearResposta (int n, int x);
int main (void){

int x;

scanf ("%d",&x);

EncadearResposta(0,x);

return 0;
}

void EncadearResposta (int n, int x){
    if (n==10)return 0;
    printf("N[%d] = %d\n",n,x);
    EncadearResposta (++n,x*2);
}
