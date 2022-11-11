# include <stdlib.h>
# include <stdio.h>


int main(void){
    char string1[20];
    char string2[] = "string literal";
    int i;;

    printf("Enter a string: ");
    scanf("%s", &string1);
    printf("string1 is : %s\nstring2 is: %s", string1, string2);
    printf("string1 with spaces between charactoers is: ");

    for(i=0;string1[i]!='\0';i++){
        printf("%c ", string1[i]);
    }
    printf("\n");

    return 0;

}
