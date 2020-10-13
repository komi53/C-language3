#include <stdio.h>
int main(void){
    int n_1, n_2, n_3, n_4, n_5;
    int i, j, min;
    scanf("%i %i %i %i %i", &n_1, &n_2, &n_3, &n_4, &n_5);
    int number[4] = {n_1, n_2, n_3, n_4, n_5};
    min = number[0];
    for(i=1; i<5; i++){
        if(min > number[i]){
            min = number[i];
        }
    }
    printf("%i", min);
    return 0;
}