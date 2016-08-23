#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (void){

    // Variável para o numero de Casos
    int count = 0;

    scanf ("%d%*c", &count);

    char* String;
    int tam;
    int i = 0;
    char aux;

    while (count--){
        String = malloc (sizeof(char)*1001);

        // Ler uma string com Espaço!
        for (i = 0; i < 10001; i++){

            aux = getchar ();
            if (aux == '\n'){

                String[i] = '\0';
                break;

            } else{
                String[i] = aux;
            }

        }

        tam = strlen(String);

        // Adicionar 3 a letras comúns
        for (i = 0; i < tam; i++){
            if ((String[i] >= 'a' && String[i] <= 'z') ||(String[i] >= 'A' && String[i] <= 'Z'))
            String[i] += 3;

        }
        // Reverter a String
        for (i = 0; i < tam/2; i++){

            aux = String[i];
            String[i]= String[tam-i-1];
            String[tam-i-1]=aux;

        }


        //Desloca todas a partir da metade (truncado)
        for (i = tam/2; i < tam; i++){

            String[i]--;

        }



        printf ("%s\n", String);
        free(String);
    }

    return 0;
}