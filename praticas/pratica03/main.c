#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
#include <string.h>


int main() {
 
   
  
   Conta conta1 = conta_criar(1);
   Conta conta2 = conta_criar(2);
  

conta_depositar(conta1, 350.0);
conta_depositar(conta2, 750.0);
conta_sacar(conta1,200.0);
conta_sacar(conta2,200.0);


conta_destruir(conta1);
    
    printf("Saldo da conta 1: %.2f\n", consultar_saldo(conta1));
    printf("Saldo da conta 2: %.2f\n", consultar_saldo(conta2));
  
   return 0;
}