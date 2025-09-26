#include <stdio.h>

int main(void) {
	
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    printf("Fahrenheit\tCelsius\n");
    printf("-------------------------\n");

    for (fahr = lower; fahr <= upper; fahr = fahr + step) {
    	
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t\t%3d\n", fahr, celsius);
        
    }

    return 0;
}
