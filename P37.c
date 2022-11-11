#include <stdlib.h>
#include <stdio.h>

int main(){
    int i, j, tmp;
    int a[5] = {26, 5, 81, 7, 63};

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    printf("Loop %d\n", i);

    for(j=0;j<5;j++)
        printf("%d  ", a[j]);
    printf("\n\n");

    }
}
