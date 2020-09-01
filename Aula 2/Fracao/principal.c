#include <stdio.h>
#include "fracao.h"

int main(int argc, char const *argv[]) {
  fracao_t *f1, *f2;
  f1 = criar(2,3);
  f2 = criar(3,4);
  fracao_t *f3 = somar(f1,f2);
  fracao_t *f4 = multiplicar(f1,f2);
  imprimir(f4);
  return 0;
}
