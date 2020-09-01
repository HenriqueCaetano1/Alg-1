#include <stdio.h>

int main(void) {
    int i;
    i = 10;
    char *p = (char *)&i;

    for(int k = 0; k < sizeof(int); k++) {
      printf("%.2x\n", *p);
      p++;
    }
    return 0;
}
