#include <stdio.h>
#include <string.h>

int main() {
    char contrasena_correcta[] = "123"; 
    char contrasena[100];
    int intentos = 0;

    while (intentos < 3) {
        printf("\nPista: La contraseña es una secuencia numerica de tres digitos\n");
        printf("Ingrese la contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(contrasena, contrasena_correcta) == 0) {
            printf("Contraseña Correcta\n");
            return 0; 
        } else {
            printf("Lo siento, contraseña equivocada\n");
            intentos++;
        }
    }

    printf("Ha superado el numero maximo de intentos.\n");
    return 0;
}3
