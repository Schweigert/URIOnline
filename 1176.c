#include <stdio.h>

int main(void){
	
   int contador=1;
   unsigned long long int antecessor=0;
   unsigned long long int atual=0;
   unsigned long long int sucessor=1;
   
	int x;
	int y;
	scanf ("%d", &x);
	
   
   while(x--){
	   
	   scanf ("%d", &y);
	   printf ("Fib(%d) ",y);
	   while (y--){
	   
      antecessor=atual;
      atual=sucessor;      
      sucessor=antecessor+atual;
      contador++;
	}
	printf ("= %llu\n",atual);
	antecessor=0;atual=0;sucessor=1;
   }
   
   return 0;
}