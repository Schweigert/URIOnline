#include <stdio.h>
 
int main (void){
 
    int _cont = 0;
    scanf ("%d",&_cont);
    _cont--;
    
    while ((_cont--)){
        
        putchar ('H');
        putchar ('o');
        putchar (' '); 
    }
    puts ("Ho!");

return 0;
}