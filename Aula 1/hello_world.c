#include <stdio.h>

int pot(int base, int exp) {
  int res = 1;
  int i;
  for(i = 0; i < exp; i++) {
    res = res * base;
  }

  return res;
}

int fatorial(int n) {
  int res = 1, i = 1;
  for(i = 1; i <= n; i++) {
    res = res * i;
  }

  return res;

}
int main(void) {
  int base, exp;
  scanf("%d %d", &base, &exp);
  printf("%d\n", pot(base, exp));
  printf("%d\n", fatorial(base));
  return 0;
}
