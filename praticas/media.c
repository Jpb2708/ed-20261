#include <stdio.h>
#include <stdlib.h>

float calcular_media(int numeros[],int n){
if (n == 0 ){

    printf(" impossivel ");
}

for(int i = 1; i < numeros; i++){
    int soma = 0;

    soma = soma + numeros;
}

return soma / n;


}
int main(){
    

float resultado_da_media;
resultado_da_media = calcular_media(int numeros[100,15,20,25,10],5);
printf("A media e %.2f",resultado_da_media);

return 0;

}

