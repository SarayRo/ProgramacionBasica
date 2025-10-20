#include <stdio.h>
#include <stdbool.h>

bool esBisiesto(int ano) {
    return (ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0);
}

int main() {
    int ano;
    char continuar;
    
    printf("VERIFICADOR DE A�OS BISIESTOS\n");
    
    do {
        printf("\nIngrese el a�o: ");
        scanf("%d", &ano);
        
        if (esBisiesto(ano)) {
            printf("El a�o %d SI es bisiesto.\n", ano);
        } else {
            printf("El a�o %d NO es bisiesto.\n", ano);
        }
        
        printf("\nVerificar otro a�o? (si/no): ");
        scanf(" %c", &continuar);  
        
    } while (continuar == 's' || continuar == 'S');
    
    printf("Fin del programa\n");
    return 0;
}
