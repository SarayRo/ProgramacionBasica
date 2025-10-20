#include <stdio.h>

int main() {
    float numero, suma = 0;
    int contador = 0;

    printf("Ingrese numeros positivos (un numero negativo para terminar): \n");

    while (1) {
        scanf("%f", &numero);

        if (numero < 0) {
            break; 
        }

        suma += numero;   
        contador++;  
    }

    if (contador > 0) {
        float promedio = suma / contador;
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron numeros positivos.\n");
    }

    return 0;
}
