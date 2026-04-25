#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscasequencial(int n, int valor, int *vet) {
    if (n-1 < 0) { //O(n)
        printf("O valor %d não foi encontrado no vetor.\n", valor);
        return 0;
    } else if (valor == vet[n-1]) { //O(1)
        printf("O valor %d foi encontrado na posição vet[%d].\n", valor, n-1);
        return 0;
    } else { 
        return buscasequencial(n-1, valor, vet); //O(n)
    } 
}

int main() {
      int vetor[100], i;
 
    for (i = 0; i < 100; i++) {
        vetor[i] = i + 1;  // vetor de 1 a 100
    }
 
     buscasequencial(100,101, vet);
      buscasequencial(100, 10, vet);
        buscasequencial(100, 5, vet);
    

    return 0;
}