
#include <stdio.h>

int main(void) {
    float fahr, celsius;
    float lower = 0, upper = 600000000, step = 200000000;

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------------\n");

    for (fahr = lower; fahr <= upper; fahr += step) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%12.2f %12.2f\n", fahr, celsius);
    }

    return 0;
}
