#include <stdio.h>
#include "conta.h"
#include "banco.h"


//criaConta(codigo, nome, agencia, numero_da_conta, saldo)

int main(){
  
printf ("%ld\n", sizeof(Banco));

Banco *b = criaBanco();
addConta(b, criaConta(123, "CARLOS ALBERTO", 123, 2222, 100));
addConta(b, criaConta(456, "JUNIOR CARLOS ", 221, 3333, 100));

imprimeContas(b);

Conta* c1 = buscaConta(b, 123);
deposito(c1, 200);
saque(c1, 50);
imprimeConta(c1);


Conta* c2 = buscaConta(b, 456);
deposito(c2, 500);
imprimeConta(c2);
imprimeContas(b);

apagarConta(b, 456);

quantidadeConta(b);


 
return 0;
}

