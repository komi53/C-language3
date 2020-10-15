#include <stdio.h>
int judg(int chair[], int b_i[], int people, int i) {
  int ans;
  for(int j = b_i[i]; j < people; j++){
    if(chair[j] == 1){
        ans = 1;
        break;
    }else if(chair[j] == 0){
        ans = 0;
    }
  }
  return ans;
}

int main(void) {
  int m, n;
  int a_i[1000], b_i[1000];
  int chair[1000];
  int people;
  int i, j, k;
  scanf("%i %i", &m, &n );
                                     // 椅子に0を代入椅子の個数を数える
  for(i = 0; i < m; i++){
    chair[i] = 0;
  }
                                    // 人数代入
  for(i = 0; i < n; i++){
    scanf("%i %i", &a_i[i], &b_i[i]);
    people = (b_i[i] + a_i[i] - 1);
                                    //　判別後、OKならchairに1を代入
    if(judg(chair, b_i, people, i) == 0){
    for(j = b_i[i] - 1; j < people; j++){
      chair[j] = 1;
    }
    }
  }
  for(k = 0; k < m; k++){
    printf("%i \n", chair[k]);
  }
  return 0;
}
