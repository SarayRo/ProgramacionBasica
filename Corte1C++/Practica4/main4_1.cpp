#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int a, b, r;

int main(int argc, char** argv) {
	
	a=25; 
	b=25;
	r=a+b;

	std::cout << "El resultado de sumar " << a << " y " << b << " es: " << a << b << r << std::endl;
	
	if (r == 40){
		printf("El resultado %d si es = 40\n", r);
	} else{
		if (r < 40) {
			printf ("El resultado %d si es < 40\n", r);
		} else {
			printf ("Elresultado SI es > 40\n", r);
		} 
	}
	
	return 0;
	
}
	
