#ifndef CONTA_H
#define CONTA_H


// conta corrente
// valores
 typedef struct conta {
  int codigo;
  char nome_conta[100];
  int agencia_conta;
  int numero_conta;
  double saldo;  
} Conta; 

 // operações


Conta* criaConta(int c , char n[100], int ag , int cc, double s);

void deposito (Conta*, double);

void saque (Conta*, double );

void imprimeConta(Conta*);


#endif 