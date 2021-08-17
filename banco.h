
#define N 100

typedef struct banco {
  Conta* contas[N];
  int pos; // usado para saber a quantidade de elementos
} Banco;

Banco* criaBanco ();

void addConta (Banco* b, Conta* c);

Conta* buscaConta (Banco* b, int _codigo);

int quantidadeConta(Banco* b);

void imprimeContas(Banco* b);

void apagarConta (Banco* b, int c);