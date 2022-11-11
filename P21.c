#include <stdlib.h>
#include <stdio.h>

void staticArrayInit(void);
void automaticArrayIntit(void);

int main(){
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayIntit();
    printf("\n");

    printf("Second call to each function:\n");
    staticArrayInit();
    automaticArrayIntit();
    printf("\n");

    return 0;

}

void staticArrayInit(void){
    static int array1[3];
    int i;
    printf( "\nValues on entering staticArraylnit: \n");
    for (i=0;i<=2; i++)
        printf( "arrayl[%d] = %d", i, array1[i]);
        printf( "\nValues on exiting staticArraylnit: \n");
    for (i=0;i<=2;i++)
        printf( "arrayl[%d] = %d ", i, array1[i]+=5);
}

void automaticArrayIntit(void){
    int array2[3]={1,2,3};
    int i;
    printf( "\n\nValues on entering automicArrayInit:\n") ;
    for (i=0;i<=2; i++)
        printf("array2[%d] = %d", i, array2[i]);
    
    printf( "\nValues on exiting automicArrayInit: \n");
    
    for (i=0;i<=2;i++)
        printf("array2[%d] = %d", i, array2[i]+=5);
}
