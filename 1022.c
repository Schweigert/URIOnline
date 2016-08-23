#include <stdio.h>
#include <stdlib.h>

long int MDC(long int a, long int b){

	 if (b == 0)
      return a;
	else
      return MDC(b, a % b);

}

int main(void){
	int qnt = 0;

	scanf ("%d", &qnt);

	while (qnt--){
		long int a, b, d, e, f,g;
		char c;
		scanf("%ld / %ld %c %ld / %ld", &a,&b,&c,&d,&e);

		switch(c){
			case '+':
				f = a*e + b*d;
				g = b*e;
				break;
			case '-':
				f = a*e - b*d;
				g = b*e;
				break;
			case '/':
				f = a*e;
				g = b*d;
				break;
			case '*':
				f = a*d;
				g = b*e;
				break;
		}
		long int mdc = MDC(f,g);
        long int baixo = g/mdc;

		printf ("%ld/%ld", f,g);

         if (g/mdc < 0) {
           baixo = g/mdc * -1;
           f *= -1;
        }

        printf (" = %ld/%ld\n",f/mdc,baixo);



	}

	return 0;
}