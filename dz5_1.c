#include <stdio.h>

int main(void) {
    
    int i=0;

start:
    i++;
    printf("\n%d",i);
    if(i<100) goto start;
    printf("\n");
    return 0;
}
