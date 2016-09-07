#include <stdio.h>

int NumeroPerfeito (int num);

int main(void) {


    int a;
    int b;

    scanf ("%d",&a);

    while (a--){

        scanf ("%d", &b);

        if (!NumeroPerfeito(b)) printf ("%d eh perfeito\n", b);
        else printf("%d nao eh perfeito\n", b);

    }


    return 0;

}

int NumeroPerfeito (int num){
	int cont = num;
    int val = 0;

    while (cont){
        cont--;
        if(cont == 0)
            break;
        if (num%cont == 0 && cont!=num) val+= cont;

    }

    return (num-val) ;
}