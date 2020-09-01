#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "conjunto.h"

#define N 100


void Criar_conjunto(tipo *A){
  for(tipo i = 0; i < N; i++) {
    A[i] = 0; //inicializando todas as posições do conjunto em 0
  }
}

void Uniao(tipo *A,tipo *B,tipo *C) {
  for(tipo i = 0; i < N; i++){
    if(A[i] == 1 || B[i] == 1) { //se o numero i esta em qualquer um dos dois conjuntos
      C[i] = 1; //adicione esse numero ao conjunto C
    }
  }
}

void Interseccao(tipo *A, tipo *B, tipo *C) {
  for(tipo i = 0; i < N; i++){
    if(A[i] == 1 && B[i] == 1) { //se o numero i esta nos dois conjuntos ao mesmo tempo
      C[i] = 1; //adicione esse numero ao conjunto C
    }
  }
}

void Diferenca(tipo *A, tipo *B, tipo *C) {
  for(tipo i = 0; i < N; i++){
    if(B[i] == 1) { //se o elemento está em B
      C[i] = 0; //C não terá ele, independente do elemento estar ou não em A
    }
    else if(A[i] == 1){ //se o elemento não estiver em B mas estiver em A
      C[i] = 1; //C terá ele
    }
    else {
      C[i] = 0; //se não estiver nem em B nem em A, não terá em C
    }
  }
}

bool Membro(tipo x, tipo *A) {
  if(A[x] == 1)
    return true;
  else
    return false;
}

void Inserir(tipo x, tipo *A){
  A[x] = 1; //adiciona o elemento x ao conjunto. Se ele já estiver adicionado, não muda nada
}

void Remover(tipo x, tipo *A) {
  A[x] = 0;
}

void Atribuir(tipo* A, tipo* B){
  A == B;
}

tipo Min(tipo* A) {
    for(int i = 0; i < N; i++) {
      if(A[i] == 1)
        return i; //ao encontrar o primeiro elemento, retorne ele. Isso é possível pois estamos implementando conjuntos que já estao automaticamente ordenados
    }
    return -1;
}

tipo Max(tipo *A) {
    for(int i = N-1; i >= 0; i--){
      if(A[i] == 1)
        return i;
    }
}

bool Igual(tipo *A, tipo *B) {
  for(tipo i = 0; i < N; i++) {
    if(A[i] != B[i])
      return false;
  }
  return true;
}

void Liberar(tipo *A) {
  free(A);
}

void Imprimir(tipo *A) {
  for(tipo i = 0; i < N; i++){
    if(A[i] == 1) { //se o elemento i estiver no conjunto
      printf("%d ", i); //imprima ele
    }
  }
  printf("\n");
}
