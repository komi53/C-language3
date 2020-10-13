#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str0[1000];
    fgets(str0, sizeof(str0), stdin);
    char str1[1000];
    fgets(str1, sizeof(str1), stdin);
    
    printf("%i", atoi(str0) * atoi(str1));
    return 0;
}