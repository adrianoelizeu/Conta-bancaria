#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conta.h"

Conta* criaConta (int codigo, char nome[100], int agencia, int numconta, double saldo){
Conta* cc = (Conta*) malloc (sizeof(Conta*)); 
cc -> codigo = codigo;
strcpy (cc -> nome_conta , nome);
cc -> agencia_conta = agencia;
cc -> numero_conta = numconta;
cc -> saldo = saldo;
return cc;
}
 
void deposito (Conta* conta, double valor){
conta ->saldo = conta ->saldo + valor; 
}

void saque (Conta* conta, double valor){
conta ->saldo = conta ->saldo - valor;
}

void imprimeConta(Conta* conta){
  printf("-------------------------------------");
  printf("\n|CODIGO: %d                        |\n", conta ->codigo);
  printf("|                                   |\n");
  printf("|     SISTEMA DE INFORMACOES        |\n");
  printf("|          CONTA CORRENTE           |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|CLIENTE: %s            |\n", conta ->nome_conta);
  printf("|AGENCIA: %d          CONTA: %d  |\n", conta ->agencia_conta,  conta ->numero_conta);
  printf("|===================================|\n");
  printf("|                                   |\n");
  printf("|SALDO ATUAL: %.2f                |\n", conta ->saldo);
  printf("|-----------------------------------|\n");
  printf("\n#######################################\n");
  printf("#######################################\n");
}

