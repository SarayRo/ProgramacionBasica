#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    int continuar = 1;
    
    printf("=====================================\n");
    printf("    SISTEMA DE CALIFICACIONES\n");
    printf("=====================================\n");
    
do {
        
    printf("\nIngrese la nota del examen (0-10): ");
        scanf("%f", &nota);
        
        
	if (nota < 0 || nota > 10) {
            printf("Error: La nota debe estar entre 0 y 10.\n");
    } else {
            
        if (nota < 5) {
            printf("Calificacion: Suspenso\n");
        } 
        
        else if (nota >= 5 && nota < 7) {
            printf("Calificacion: Aprobado\n");
        } 
        
    	else if (nota >= 7 && nota < 9) {
            printf("Calificacion: Notable\n");
		} 
		
        else if (nota >= 9 && nota < 10) {
                printf("Calificacion: Sobresaliente\n");
        }
		 
            else if (nota == 10) {
                printf("Calificacion: Matricula de honor\n");
            }
        }
        
        printf("\nDesea calificar otra nota?\n");
        printf("1. Si\n");
        printf("2. No\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &continuar);
        
        while (getchar() != '\n');
        
    } while (continuar == 1);
    
    printf("\nPrograma finalizado! Gracias por usar el sistema.\n");
    
    return 0;
}
