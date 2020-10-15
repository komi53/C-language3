#include <stdio.h>
int cal(int r[]) {
    int area = 2 * r[0];
    return area;
}

int main(void) {
  int m, n[100];
  scanf("%i %i", &n[0], &n[1]);
  if( cal(n) == 4){
    printf("%i", cal(n));
  }
  return 0;
}
