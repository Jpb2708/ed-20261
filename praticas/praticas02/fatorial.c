#include <stdio.h>
#include <stdlib.h>


int fatorialrecursivo(int numero) {
    if (numero == 0){
      return 1;
    } else if( numero == 1) {
      return 1;
    } else {
        return numero * fatorialrecursivo(numero - 1);
    }
}

int fatorialrepeticao(int numero) {
    int resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 10
    if (numero < 0) {
        printf("Só numeros positivos.\n");
        return 1;
    }
  
    printf("O fatorial de %d por recursão é %d.\n", numero, fatorialrecursivo(numero)); 
    printf("O fatorial de %d por repetição é %d.\n", numero, fatorialrepeticao(numero));

    return 0;
}