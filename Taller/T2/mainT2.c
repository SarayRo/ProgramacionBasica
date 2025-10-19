#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombre[50];  
    int precio;
    int cantidad;
    int valor;
    int seguir = 1;

	while (seguir == 1) {

        printf ("\tNyx's Super \n");
		printf ("\tNombre del producto: ");
			scanf ("%s", nombre);  
	
		printf ("\tPrecio unitario del producto: ");
			scanf ("%d", &precio);
			
		printf ("\tNumero de unidades del producto: "); 
			scanf ("%d", &cantidad);
			
		valor = precio * cantidad;
		
		printf ("\n");
	printf ("\n");
	printf ("\n");
	
		printf ("\t=========================== Resumen de la compra ===========================\n");
		printf ("\tProducto \t Precio por Unidad \t Numero de Unidades \t Valor total \n");
		printf("\t%-15s \t $%-15d \t %-15d    $%d \n", nombre, precio, cantidad, valor);
	
	printf ("\n");
	printf ("\n");
	printf ("\n");

		printf ("\t Desea realiza otra compra? \n");
		printf ("\t1. SI \n\t2. NO \n");
			scanf ("%d", &seguir);
		printf ("\n	Gracias por su compra :3");
	
}

return 0;	

}
