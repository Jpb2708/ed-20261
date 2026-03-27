#include <stdio.h>

int main(){

    float peso ;
    float altura ;
    float imc ;

    

    scanf("%f", &peso);
    getchar();
    printf("digite sua altura: ");
    scanf("%f", &altura);
    
    if( altura <=  0 && peso <= 0 ){

        printf("voce nao e humano");
    }
    
    else { 

        imc = peso / ( altura * altura) ;

        printf("seu imc e : %f ", imc);
    }

    if(imc < 18.5 ){
        printf("seu peso e normmal");
    }
    else if (imc >= 18 && imc <= 24.9){

        printf("voce tem sobrepeso");
    }
    else if (imc > 30)   {

        printf ("voce e gordo");
    }

    
    return 0;
}