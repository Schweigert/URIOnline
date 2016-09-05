#include <stdio.h>


int main (void){

    int dias = 0;
    int casos = 0;
    int num = 0;
    scanf ("%d", &dias);

    int a = 0;

    for (a = 0 ; a < dias; a++){

        scanf ("%d", &casos);

        for ( ; casos != 0; casos--){


            scanf ("%d", &num);

            switch (num){
            case 1:
                puts ("Rolien");
                break;
            case 2:
                puts ("Naej");
                break;
            case 3:
                puts ("Elehcim");
                break;
            case 4:
                puts ("Odranoel");
                break;


            }


        }
    }


    return 0;
}
