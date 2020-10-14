#include <stdio.h>
#include<string.h>
int main(void){
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    if(strcmp(a,b)==0){
        printf("%s", "OK");
    }else{
        printf("%s", "NG");
    }
    return 0;
}