#include <stdio.h>
#include <stdbool.h>  

int main() {
    int numero;
    char opcion;

    do {
        bool esPrimo = true;
        int i;

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero <= 1) {
            esPrimo = false; 
        } else {
            for (i = 2; i <= numero / 2; i++) {
                if (numero % i == 0) {
                    esPrimo = false;
                    break; 
                }
            }
        }

        if (esPrimo)
            printf("%d es un numero primo.\n", numero);
        else
            printf("%d no es un numero primo.\n", numero);

        printf("\nDesea volver a empezar? (s/n): ");
        scanf(" %c", &opcion);  

    } while (opcion == 's' || opcion == 'S'); 

    printf("Programa finalizado.\n");
    return 0;
}
