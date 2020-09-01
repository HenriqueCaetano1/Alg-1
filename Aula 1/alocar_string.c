#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *str = (char *)malloc(sizeof(char));
  char c;
  int i = 0;

  while((c = getchar()) != '\n') {
    str[i++] = c;
    str = (char *)realloc(str,sizeof(char) * (i));
  }
  str[i] = '\0';
  printf("%s, %lu\n", str, sizeof(str));

  char *p = (char *)str;
  for(int k = 0; k < sizeof(str); k++) {
    printf("%.3x\n", *p);
    p++;
  }
  free(str);
  return EXIT_SUCCESS;
}
