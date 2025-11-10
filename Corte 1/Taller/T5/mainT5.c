#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float apuesta, saldo = 250.0;
    int opcion;
    int resultado;
    
    srand(time(NULL));
    
    printf("=== DOBLE O NADA ===\n");
    
do {
    printf("\n--- MENU ---\n\n");
        
    printf("Saldo actual: $%.2f\n\n", saldo);
        
    printf("1) Jugar\n\n");
        
    printf("2) Ver saldo actual\n\n");
        
    printf("3) Salir\n\n");
        
    printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);
        
while(getchar() != '\n'); 
        
    switch(opcion) {
        	
        case 1:
                
        printf("\nCuanto deseas apostar? ");
            scanf("%f", &apuesta);

while(getchar() != '\n');
                
if(apuesta <= 0 || apuesta > saldo) {
    printf("Apuesta no valida\n");
    
	break;
}
                
    resultado = rand() % 2;
    printf("\nLanzando moneda...\n");
                
if(resultado == 1) {
    printf("CARA!\n Ganas $%.2f\n", apuesta);
    saldo += apuesta;
                    
} 
else {
printf("CRUZ!\n Pierdes $%.2f\n", apuesta);
saldo -= apuesta;
}
                
if(saldo <= 0) {
    printf("\nTe quedaste sin saldo!, (sos malisismo).\n");
    opcion = 3; 
}
                
break;
                
        case 2:
                
    printf("\n--- SALDO ACTUAL ---\n");
    printf("Tu saldo es: $%.2f\n", saldo);
                
break;
                
        case 3:
                
    printf("\nSaliendo del juego...\n");
break;
                
        default:
        	
    printf("\nOpcion no valida. Intente nuevamente.\n");
    
        }
        
    } 
	
	while(opcion != 3 && saldo > 0);
    
    printf("\nSaldo final: $%.2f\n", saldo);
    printf("\n¡Gracias por jugar!\n");
    
	return 0;
}
