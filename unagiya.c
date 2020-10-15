#include <stdio.h>
int jud(int r) {
    int area = 2 * r;
    return area;
}

int main(void) {
  int m, n;
  int a_i[1000], b_i[1000];
  int chair[];
  int people;
  int i, j;
  scanf("%i %i", &m, &n );
  // 椅子に0を代入椅子の個数を数える
  for(i = 0; i < m; i++){
    chair[i] = 0;
  }
  // 人数代入
  for(i = 0; i < n; i++){
    scanf("%i %i", &a_i[i], &b_i[i]);
    people = (b_i[i] + a_i[i] - 1);
    while (i < 2){
      printf("こんにちは¥n");
      i++;
    }
    for(j = b_i[i]; j < people; j++){
      chair[j] = 1;
    }
  }
  


  //for(j = 0; j < n; j++){
  //  printf("%i %i \n", a_i[j], b_i[j]);
  //}
  return 0;
}
