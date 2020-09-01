#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "conjunto.h"

int main(int argc, char const *argv[]) {
  tipo *c1 = (tipo *)malloc(N*sizeof(tipo));
  tipo *c2 = (tipo *)malloc(N*sizeof(tipo));
  tipo *c3 = (tipo *)malloc(N*sizeof(tipo));
  Criar_conjunto(c1);
  Criar_conjunto(c2);
  Criar_conjunto(c3);
  for(int i = 0; i < 16; i++) {
    Inserir(i, c1); //inserindo os numeros de 0 a 14 em c1
  }

  for(int i = 10; i < 20; i++){
    Inserir(i,c2); //inserindo os numeros de 10 a 19 em c2
  }

  printf("c1: ");
  Imprimir(c1);

  printf("c2: ");
  Imprimir(c2);

  printf("Uniao de c1 com c2: ");
  Uniao(c1, c2, c3);
  Imprimir(c3); //c3 imprime a uniao de c1 com c2

  printf("Valor maximo de c1 e minimo de c2: ");
  printf("%d e %d\n", Max(c1), Min(c2));
  Liberar(c3); //liberando a memoria de c3

  tipo *c4 = (tipo *)malloc(N*sizeof(tipo));
  Criar_conjunto(c4);

  printf("Diferenca de c1 com c2: ");
  Diferenca(c1,c2,c4);
  Imprimir(c4); //c4 imprime a diferenca de c1 com c2

  tipo *c5 = (tipo *)malloc(N*sizeof(tipo));
  Criar_conjunto(c5);

  printf("Interseccao de c1 com c2: ");
  Interseccao(c1,c2,c5);
  Imprimir(c5); //c5 imprime a interseccao de c1 com c2
  return 0;
}
