#include <stdio.h>    
int main(void){
//printf("Hello World!!!");
/*
int stdc = __STDC_VERSION__;
printf("%u",stdc);
*/
puts("Printable ASCII:");
    for (int i = 32; i < 127; ++i) {
        putchar(i);
        putchar(i % 16 == 15 ? '\n' : ' ');
    }
return 0;   
}