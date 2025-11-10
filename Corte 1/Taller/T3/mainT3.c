#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre [50];
	float horasTrabajadas;
	float precioPorHora;
	float retencion;
	float sueldoBruto;
	float sueldoNeto;
	int seguir = 1;
	
while  (seguir == 1) {

	printf ("\nNombre del trabajador: ");
		scanf ("%s", nombre);
		
		while (getchar() != '\n');
		
	printf ("\nHoras de trabajo: ");
		scanf ("%f", &horasTrabajadas);
		
		while (getchar() != '\n');
		
	printf ("\nPrecio por hora: ");
		scanf ("%f", &precioPorHora);
		
		while (getchar() != '\n');
		
	sueldoBruto = horasTrabajadas * precioPorHora;
    retencion = sueldoBruto * 0.05f;  
    sueldoNeto = sueldoBruto - retencion;
    
    printf ("\nNomina de %s: \n", nombre);
    printf ("\nSueldo Bruto %.2f: \n", sueldoBruto);
    printf ("\nRetencion %.2f: \n", retencion);
    printf ("\nSueldo Neto %.2f: \n", sueldoNeto);
    
    printf("\nDesea calcular otra nomina? \n\n(1=Si, 0=No): ");
        scanf("%d", &seguir);
        while (getchar() != '\n');

}
	return 0;
}
