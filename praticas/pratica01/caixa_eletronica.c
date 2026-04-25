#include <stdio.h>
#include <stdlib.h>
 
void Notas(int valor) {
   int cedulas[7] = {200, 100, 50, 20, 10, 5, 2};
   int i; 
   int quantidade;
   if(valor < 2 && valor > 1000 && valor % 2 != 0 ){
    printf("eu uma mera maquina nao sou capaz de fazer essa conta ainda\n");
   }
 
    else {
       printf("Sacou: %d\n", valor);
       for (i = 0; i < 7; i++) {
           quantidade = valor / cedulas[i];
           valor = valor % cedulas[i];
           if (quantidade > 0) {
               printf(" %3d: %d de notas\n", cedulas[i], quantidade);
           }
       }
   }
}
 
int main() {
  Notas(320);
  Notas(600);
  
   return 0;
}