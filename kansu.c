#include <stdio.h>
int cal(int r) {
    int area = 2 * r;
    return area;
}

int main(void) {
  int m, n;
  scanf("%i", &n);
  if( cal(n) == 4){
    printf("%i", cal(n));
  }
  return 0;
}
