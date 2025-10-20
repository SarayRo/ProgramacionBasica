#include <stdio.h>
#include <string.h>

int main() {
    int dia, mes, ano;
    char continuar;
    
    printf("SIGNOS ZODIACALES\n");
    
    do {
        printf("\nIngrese su fecha de nacimiento\n");
        printf("Dia: ");
        scanf("%d", &dia);
        printf("Mes: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);
        
        if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
            printf("Error: Fecha invalida.\n");
        } else {
            char signo[100]; 
            
            if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
                strcpy(signo, "Aries, eres medio impaciente, mi bro");
            } 
            else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
                strcpy(signo, "Tauro, muy terco");
            } 
            else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
                strcpy(signo, "Geminis, nada que decir");
            } 
            else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
                strcpy(signo, "Cancer, respira, ntp");
            } 
            else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
                strcpy(signo, "Leo, muy orgullosito");
            } 
            else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
                strcpy(signo, "Virgo, calma, nevera");
            } 
            else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
                strcpy(signo, "Libra, alto ahi Johnny Bravo");
            } 
            else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
                strcpy(signo, "Escorpio, Celos de tus ojos cuando miras a otra chica, tengo celos");
            } 
            else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
                strcpy(signo, "Sagitario, ya te escuchamos...");
            }
            else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
                strcpy(signo, "Capricornio, mal ahi...");
            } 
            else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
                strcpy(signo, "Acuario, Y ahora que te paso?");
            } 
            else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
                strcpy(signo, "Piscis, solializa un ratito :D");
            }
            else {
                strcpy(signo, "Error: signo no encontrado, identificate");
            }
            
            printf("\n--- RESULTADO ---\n");
            printf("Fecha de nacimiento: %d/%d/%d\n", dia, mes, ano);
            printf("Su signo zodiacal es: %s\n", signo);
        }
        
        printf("\nDesea verificar otra fecha? (s/n): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');
    
    printf("\nPrograma finalizado! Gracias por usarlo.\n");
    
    return 0;
}
