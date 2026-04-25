#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorialrecursivo(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorialrecursivo(num - 1);
    }
}

int fatorialrepeticao(int num) {
    int resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num = 10;
    if (num < 0) {
        printf("So numero positivo.\n");
        return 1;
    }
    
    printf("O fatorial de %d por recursão é %d.\n", num, fatorialrecursivo(num)); 
    printf("O fatorial de %d por repetição é %d.\n", num, fatorialrepeticao(num));
    return 0;
}