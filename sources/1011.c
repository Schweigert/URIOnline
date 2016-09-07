#include <stdio.h>

int main (void){
	double _pi = 3.14159;
	long int _raio = 0;

	scanf ("%ld",&_raio);

	 printf ("VOLUME = %.3f\n",(4/3.0) * _pi * _raio * _raio * _raio);


	return 0;
}