#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
int judg(char log[], char word, int i) {
  int c = z, ans;
  char *p;
  for(int j = 0; j < i; j++){
    if(log[j] == word){
      ans = 1;
    }
    p = wcsrstr(word, 'z');
      if(p != NULL){
        ans = 1;
      }
  }
  return ans;
}
int main(void){
    int N, K, M;
    char d_K[1000],s_M[1000];
    int result_sum = 0, result_number[1000];
    int i, a;
    char log[1000], word;
    scanf("%i %i %i", &N, &K, &M);
    for(i = 0; i < K; i++){
      scanf("%s", d_K);
    }
    for(i = 0; i <= M; i++){
      scanf("%s", s_M);
    }
    // result_numberに各番号に０を振り分け
    for(i = 0; i < N; i++){
      result_number[i] = 0;
    }
    for(i = 0; i < M; i++){
      word = s_M[i];
      log[i] = s_M[i];
      if(judg(log, word, i) == 1){
        if(i == 0){
          a = 0;
        }else if(M % i == 0){
          a = N;
        }else{
          a = M % i;
        }
        result_number[a] = 1;
      }
    }
    for(i = 0; i < N; i++){
      if(result_number[i] == 0){
        result_sum += 1;
      }
    }
    printf("%i\n", result_sum);
    for(i = 0; i < N; i++){
      if(result_number[i] == 0){
        printf("%i\n", i + 1);
      }
    }

    return 0;
}