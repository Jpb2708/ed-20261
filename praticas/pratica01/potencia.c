#include <stdio.h>

int calcular_potencia( int base , int expoente){
    if(expoente == 0){

        return 1;
    }
    else if(expoente == 1){
    
    return base;
  
}
else if(expoente < 0){

    printf("nao pode");
}

else{
    int resultado = 1;
    
    for(int i = 0;i < expoente; i++){
        resultado = resultado * base;
    }

    return resultado;
}

}

       
    int main(){

        int resultado;

        resultado = calcular_potencia(2, 3);
        printf("o resultado da potencia e %i", resultado );
      

      


        
       


            
        
        
        return 0;

    }
    


   


