#include <stdio.h>
int main(void){
  int n, k;
  int a_i[1000], cand = 0;
  int i, j, sum;
  int count = 0, early_date = 0;
  scanf("%i %i", &n, &k);
  for(i = 0;i < n; i++){
    scanf("%i", &a_i[i]);
  }

  for(i = 0; i < (n + 1) - k; i++){
    sum = 0;
    for(j = i; j < i + k; j++){
      sum += a_i[j];
    }
    if(sum >= count && i != 0){
      if(sum > count){
        early_date = i;
        count = sum;
        cand = 0;
      }
      cand += 1;
    }else if(i == 0){
      count = sum;
    }
    //printf("%i %i\n", sum, i);
  }
  if(early_date == 0){
    cand += 1;
  }
  early_date += 1;
  //printf("%i \n", count);
  printf("%i %i", cand, early_date);
  return 0;
}