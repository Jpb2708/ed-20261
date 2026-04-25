#include <stdio.h>
#include <time.h>
#define LINHAS 10
#define COLUNAS 10
 

void exibirmatriz1(int matriz[LINHAS][COLUNAS]) {
    int i, 
    int j;
    clock_t inicio, fim;
 
    inicio = clock();
    printf("Dois lacos aninhados\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) { // O(n^2)
            printf("%3d\n ", matriz[i][j]);
        }
        
    }
    fim = clock();
 
    printf(" O(n^2)\n");
    printf("Tempo de execucao: %.6f segundos\n\n", (double)(fim - inicio) / CLOCKS_PER_SEC);
}
 

void exibirMatriz2(int matriz[LINHAS][COLUNAS]) {
    int k, linha, coluna;
    clock_t inicio, fim;
 
    inicio = clock();
    printf("Um laco\n");
    for (k = 0; k < LINHAS * COLUNAS; k++) { // O(n^2)
        linha = k / COLUNAS;
        coluna = k % COLUNAS;
        printf("%3d\n ", matriz[linha][coluna]);
        if (coluna == COLUNAS - 1) {
            
        }
    }
    fim = clock();
 
    printf(" O(n^2)\n");
    printf("Tempo de execucao: %.6f segundos\n\n", (double)(fim - inicio) / CLOCKS_PER_SEC);
}
 
int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
 
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i * COLUNAS + j + 1;
        }
    }
 
    exibirMatriz1(matriz);
    exibirMatriz2(matriz);
 
    return 0;
}