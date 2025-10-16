#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";
    int i;
    
    for (i = 0; str1[i] == str2[i]; i++) {

        if (str1[i] == '\0' && str2[i] == '\0') {

            printf("Las cadenas son iguales.\n");
            return 0;
            
        }
    }
    
    printf("Las cadenas son diferentes.\n");
    return 0;
}
