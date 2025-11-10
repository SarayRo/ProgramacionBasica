#include <stdlib.h>
#include <stdio.h>

int main() {
    int chose;
    int j, s, d, r, area, perimetro; 

int seguir = 1;

while (seguir == 1) {
		printf ("Areas y Perimetros \n\n 1. Rectangulo \n 2. Circulo \n 3. Cuadrado \n 4. Triangulo \n 5. Salir \n");
		printf ("\nSelecciona una figura:");
		scanf ("%d", &chose);
	
switch (chose) {
	case 1:
	
	system ("cls");
		printf ("Seleccionaste el Rectangulo \n");
		printf ("Ingresa su altura: \n");
		  scanf ("%d", &j);
		printf ("Ingresa su base: \n");
		  scanf ("%d", &s);
		
			area = j*s;
			perimetro = (j + s) * 2; 
		printf ("El area del Rectangulo es = %d y su perimetro es = %d \n", area, perimetro);

break;

	case 2:
	
	system ("cls");
		printf ("Seleccionaste el Circuo \n");
		printf ("Ingresa su radio: \n");
		  scanf ("%d", &d);
		
			area = (3.1416 * d * d);
			perimetro = (3.1416 * 2 * d);
		printf ("El area del Circulo es = %d y su perimetro es = %d \n", area, perimetro);

break;

	case 3:
		
	system ("cls");
		printf ("Seleccionaste el Cuadrado \n");
		printf ("Ingresa su altura: \n");
		  scanf ("%d", &j);
		
			area = j * j;
			perimetro = j*4;
		printf ("El area del Cuadrado es =%d y su perimetro es %d \n", area, perimetro);
		
break;

	case 4:
	
	system ("cls");
		printf ("Seleccionaste el Triangulo \n");
		printf ("Ingresa su altura: \n");
		  scanf ("%d", &j);
		printf ("Ingresa su base: \n");
		  scanf ("%d", &s);
		printf ("Ingresa un lado \n");
		  scanf ("%d", &r);
		
			area = (j *s) / 2;
			perimetro = 3 * r;
		printf ("El area del Triangulo es =%d y su perimetro es %d \n", area, perimetro);

break;

	case 5:
		
	system ("cls");
	seguir = 5;
	printf ("Ha finalizado el programa");
	
break;
	
}
	
}
		
	return 0;	
}




