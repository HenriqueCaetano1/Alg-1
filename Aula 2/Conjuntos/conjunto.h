typedef int tipo;
#define N 100

void Criar_conjunto(tipo *A);
void Uniao(tipo *A,tipo *B,tipo *C);
void Inserir(tipo x, tipo *A);
void Interseccao(tipo *A, tipo *B, tipo *C);
void Diferenca(tipo *A, tipo *B, tipo *C);
bool Membro(tipo x, tipo *A);
void Remover(tipo x, tipo *A);
void Atribuir(tipo* A, tipo* B);
tipo Min(tipo* A);
tipo Max(tipo *A);
bool Igual(tipo *A, tipo *B);
void Liberar(tipo *A);
void Imprimir(tipo *A);
