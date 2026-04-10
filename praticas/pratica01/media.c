#include <stdio.h>
 

 
    void calcular_media (float numeros[], int n){
    int i;
    float soma = 0;
   
    if (n <= 0 || n > 100) {
        printf("escolha um numero de 1 a 100\n");
        }
       

    for (i = 0; i < n; i++) {
        
        soma += numeros[i]; 
    }
    
         
  printf("A media aritmetica e: %.2f\n", soma/n);
         
}
    
    
    int main(){

        float numeros1[] = {1,32,56,76,5,6};
       

   calcular_media (numeros1,6);
         
   

    return 0;
    
}

    
    
