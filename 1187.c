#include <stdio.h>

int main (void){
	
	char test;
	double Mat[12][12];
	
	int x,y;
	
	scanf ("%c", &test);
	
	for (x = 0; x < 12; x++){
		for (y = 0; y < 12; y++){
			scanf ("%lf",&Mat[x][y]);
		}
	}
	
	double res = 0;
	int div = 0;

	res += Mat[0][1];div++;
	res += Mat[0][2];div++;
	res += Mat[0][3];div++;
	res += Mat[0][4];div++;
	res += Mat[0][5];div++;
	res += Mat[0][6];div++;
	res += Mat[0][7];div++;
	res += Mat[0][8];div++;
	res += Mat[0][9];div++;
	res += Mat[0][10];div++;
	
	res += Mat[1][2];div++;
	res += Mat[1][3];div++;
	res += Mat[1][4];div++;
	res += Mat[1][5];div++;
	res += Mat[1][6];div++;
	res += Mat[1][7];div++;
	res += Mat[1][8];div++;
	res += Mat[1][9];div++;
	
	res += Mat[2][3];div++;
	res += Mat[2][4];div++;
	res += Mat[2][5];div++;
	res += Mat[2][6];div++;
	res += Mat[2][7];div++;
	res += Mat[2][8];div++;
	
	res += Mat[3][4];div++;
	res += Mat[3][5];div++;
	res += Mat[3][6];div++;
	res += Mat[3][7];div++;
	
	res += Mat[4][5];div++;
	res += Mat[4][6];div++;
	
	if (test == 'S') printf ("%.1lf\n",res);
	else printf ("%.1lf\n",res/div*1.0);
	
	return 0;
}