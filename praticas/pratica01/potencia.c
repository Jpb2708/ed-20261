#include <stdio.h>

int calcular_potencia( int base , int expoente){
    if(expoente == 0){

        return 1;
    }
    else if(expoente == 1){
    
    return base;
  
}
else if(expoente < 0){

    printf("eu uma mera maquina nao sou capaz de fazer essa conta ainda\n");
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
        resultado = calcular_potencia(2, 4);
       
        
        printf("o resultado da potencia e %i", resultado );
        
        return 0;

    }
    


   


