#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int numeroSecreto, intento, intentos = 0;
    char jugarOtraVez;
    
    srand(time(0));
    
    printf("     JUEGO: ADIVINA EL NUMERO\n");
    printf("Adivina el numero secreto entre 1 y 10\n");
    
    do {
        numeroSecreto = rand() % 10 + 1;
        intentos = 0;
        
        printf("\n--- NUEVO JUEGO ---\n");
        printf("Hemos generado un numero entre 1 y 10. Adivinalo!\n");
        
        do {
            printf("Ingresa tu intento: ");
            scanf("%d", &intento);
            intentos++;
            
            if (intento < 1 || intento > 10) {
                printf("Por favor, ingresa un numero entre 1 y 10.\n");
            } 
            else if (intento < numeroSecreto) {
                printf("El numero secreto es MAYOR que %d\n", intento);
            } 
            else if (intento > numeroSecreto) {
                printf("El numero secreto es MENOR que %d\n", intento);
            } 
            else {
                printf("\nFELICIDADES! Adivinaste el numero!\n");
                printf("El numero secreto era: %d\n", numeroSecreto);
                printf("Lo lograste en %d intento(s)\n", intentos);
                
                if (intentos == 1) {
                    printf("INCREIBLE! One shot!\n");
                } else if (intentos <= 3) {
                    printf("Volaste, muy teso!\n");
                } else if (intentos <= 5) {
                    printf("Ahi vas!\n");
                } else {
                    printf("Meh!\n");
                }
            }
            
        } while (intento != numeroSecreto);
        
        printf("\nQuieres jugar otra vez? (s/n): ");
        scanf(" %c", &jugarOtraVez);
        
    } while (jugarOtraVez == 's' || jugarOtraVez == 'S');
    
    printf("\nGracias por jugar, hasta la proxima!\n");

    return 0;
}
