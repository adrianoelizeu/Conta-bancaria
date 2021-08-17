#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conta.h"
#include "banco.h"



Banco* criaBanco(){
Banco *b = malloc(sizeof(Banco));
b -> pos = 0;
return b;
}

void addConta (Banco* b, Conta* c){
  if (b->pos < N){
    b ->contas[b->pos] = c;
    b -> pos++;
  }
}

Conta* buscaConta (Banco* b, int _codigo){
  int i;
  for(i = 0; i <b->pos; i++){
    if (_codigo == b->contas[i]->codigo){
      return b->contas[i];
     }
   }
   return 0; 
   }
 
int quantidadeConta (Banco* b){ 
  if(b->pos< N){
  return printf("\n:::: CONTIDADE DE CONTAS: %i", b->pos);
  }
  else return printf("NENHUMA CONTA CADASTRADA");
}

void imprimeContas(Banco* b){
  int i;
  for(i = 0; i < b->pos ; i++){

  printf("-------------------------------------");
  printf("\n|CODIGO: %d                        |\n", b->contas[i]->codigo);
  printf("|                                   |\n");
  printf("|     SISTEMA DE INFORMACOES        |\n");
  printf("|          CONTA CORRENTE           |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|CLIENTE: %s            |\n",  b->contas[i]->nome_conta);
  printf("|AGENCIA: %d          CONTA: %d  |\n",  b->contas[i]->agencia_conta,   b->contas[i]->numero_conta);
  printf("|===================================|\n");
  printf("|                                   |\n");
  printf("|SALDO ATUAL: %.2f                |\n",  b->contas[i]->saldo);
  printf("|-----------------------------------|\n");
  printf("\n#######################################\n");
  }
  }

void apagarConta (Banco* b, int c){
  int i;
  for(i = 0; i <(b->pos); i++){
    if (c == b->contas[i]->codigo){
      free(b->contas[i]);
      if(b->pos> 0){
        int x = b->pos - 1;
        b->pos--; 
        }
      } 
    }
}
