#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroUno, numeroDos, seguir;
    
    do {

        numeroUno = 0;
        numeroDos = 0;
        
        printf("\nIngrese el primer numero: ");
        scanf("%d", &numeroUno);
        
    while (getchar() != '\n'); 
        
        printf("\nIngrese el segundo numero: ");
        scanf("%d", &numeroDos);
        
    while (getchar() != '\n'); 
        
        
    if (numeroUno > numeroDos) {
            printf("\nEl numero mayor es = %d \nEl numero menor es = %d\n", numeroUno, numeroDos);
    } 
    
    else if (numeroUno < numeroDos) {
            printf("\nEl numero mayor es = %d \nEl numero menor es = %d\n", numeroDos, numeroUno);
    }
    
    else {
            printf("\nLos numeros son iguales.\n");
    }
        
      
        printf("\nDesea ingresar otro valor?");
        printf("\n1. SI \n2. NO \n");
        scanf("%d", &seguir);
        
        while (getchar() != '\n'); 
        
    } while (seguir == 1); 
    
    printf("\nEl programa ha finalizado\n");
    
    return 0;
}
