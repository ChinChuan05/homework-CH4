#include <stdlib.h>
#include <stdio.h>

int add(int xref){
    xref++;
    printf("xref=%d\n", xref);
    return xref;
}

int main (void){
    int x = 100;
    int y = add(x);
    printf("x=%d\n", x);
}

