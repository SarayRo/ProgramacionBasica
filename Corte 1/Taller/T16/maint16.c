#include <stdio.h>

int main() {
    int N, M;
    char opcion;

    do {
        int contador = 0;
        int i;

        printf("Ingrese el primer numero (N): ");
        scanf("%d", &N);
        printf("Ingrese el segundo numero (M): ");
        scanf("%d", &M);

        if (N <= M) {
            printf("Error: el primer numero debe ser mayor que el segundo.\n");
        } else {
            printf("Los tres primeros numeros pares entre %d y %d son:\n", N, M);

            for (i = M + 1; i < N; i++) {
                if (i % 2 == 0) { 
                    printf("%d ", i);
                    contador++;
                }
                if (contador == 3) {
                    break; 
                }
            }

            if (contador < 3) {
                printf("\nNo hay tres numeros pares entre los valores ingresados.\n");
            }

            printf("\n");
        }

        printf("\nDesea volver a empezar? (s/n): ");
        scanf(" %c", &opcion);

    } while (opcion == 's' || opcion == 'S'); 

    printf("\nPrograma finalizado.\n");
    return 0;
}
