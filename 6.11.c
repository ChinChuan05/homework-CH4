#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    int i, j, tmp;
    bool break_flag;
    int a[5] = {26, 5, 81, 7, 63};


    // a method)
    printf("a) method:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
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

    // b)
    int b[5] = {26, 5, 81, 7, 63};
    printf("\nb) method:\n");
    for(i=0;i<4;i++){
        break_flag = 1;
        for(j=0;j<4-i;j++){
            if (b[j]>b[j+1]){
                break_flag = 0;
                tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
        printf("Loop %d\n", i);

        for(j=0;j<5;j++)
            printf("%d  ", b[j]);
        printf("\n\n");

        if (break_flag)
            break;
    }
}