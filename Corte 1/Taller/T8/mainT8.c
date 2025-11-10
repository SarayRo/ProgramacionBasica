#include <stdio.h>
#include <stdbool.h>

bool esBisiesto(int ano) {
    return (ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0);
}

int main() {
    int ano;
    char continuar;
    
    printf("VERIFICADOR DE AÑOS BISIESTOS\n");
    
    do {
        printf("\nIngrese el año: ");
        scanf("%d", &ano);
        
        if (esBisiesto(ano)) {
            printf("El año %d SI es bisiesto.\n", ano);
        } else {
            printf("El año %d NO es bisiesto.\n", ano);
        }
        
        printf("\nVerificar otro año? (si/no): ");
        scanf(" %c", &continuar);  
        
    } while (continuar == 's' || continuar == 'S');
    
    printf("Fin del programa\n");
    return 0;
}
