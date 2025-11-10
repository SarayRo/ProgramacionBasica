#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroUno, numeroDos, numeroTres, seguir;
    int mayor, menor;
    
    do {
        
        numeroUno = 0;
        numeroDos = 0;
        numeroTres = 0;
        
        
        printf("\nIngrese el primer numero: ");
        scanf("%d", &numeroUno);
        while (getchar() != '\n'); 

        printf("\nIngrese el segundo numero: ");
        scanf("%d", &numeroDos);
        while (getchar() != '\n'); 

        printf("\nIngrese el tercer numero: ");
        scanf("%d", &numeroTres);
        while (getchar() != '\n'); 

        
        if (numeroUno == numeroDos && numeroDos == numeroTres) {
            printf("\nLos tres numeros son iguales: %d\n", numeroUno);
        } else {
            
            mayor = numeroUno;
            if (numeroDos > mayor) mayor = numeroDos;
            if (numeroTres > mayor) mayor = numeroTres;
            
            
            menor = numeroUno;
            if (numeroDos < menor) menor = numeroDos;
            if (numeroTres < menor) menor = numeroTres;

            // Mostrar resultados
            printf("\nEl numero mayor es = %d", mayor);
            printf("\nEl numero menor es = %d\n", menor);
        }

        
        printf("\nDesea ingresar otros valores?");
        printf("\n1. Si \n2. No\n");
        scanf("%d", &seguir);
        while (getchar() != '\n'); 

    } while (seguir == 1);
    
    printf("\nEl programa ha finalizado.\n");
    
    return 0;
}
