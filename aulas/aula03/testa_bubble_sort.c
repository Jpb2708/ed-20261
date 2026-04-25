#include <stdio,h>
#include <time.h>
#include "ordenacao.h"
#define TAMANHO 10;
#include <stdlib.h>


int main(){

    int vetor[TAMANHO] = {5,11,4,1,17,8,6,47,51,2};

    printf("vetor antes da ordenacao\n");
    imprimir_vetor(vetor, TAMANHO);
    printf("vetor antes da ordenacao em %fs\n");
    imprimir_vetor(vetor,TAMANHO);
    
}