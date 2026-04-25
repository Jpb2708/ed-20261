#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
 
int main() {
  
   Conta c1 = conta_criar(1054, 500.00);
   Conta c2 = conta_criar(1002, 0.00);


   conta_depositar(c1, 10.00);
   conta_depositar(c2, 1320.00);

   conta_sacar(c1, 18.00);
   conta_sacar(c2, 500.00);

   conta_ver_saldo(c1);
   conta_ver_saldo(c2);
   
   conta_destruir(c1);
   conta_destruir(c2);
 
   return 0;
}