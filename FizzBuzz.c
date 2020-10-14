#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i;
    char N[10];
    fgets(N, sizeof(N), stdin);
    for(i = 1; i <= atoi(N); i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("%s", "Fizz Buzz");
        }
        else if(i % 3 == 0){
            printf("%s", "Fizz");
        }
        else if(i % 5 == 0){
            printf("%s", "Buzz");
        }
        else{
            printf("%i", i);
        }
        printf("%s", "\n");
    }
    return 0;
}