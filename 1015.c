#include <stdio.h>


int main (void){

    float x1=0,y1=0,x2=0,y2=0;

    scanf ("%f %f %f %f",&x1,&y1,&x2,&y2);

    float dist = 0;

    dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    printf("%.4f\n",dist);

return 0;
}
