#include <iostream>
using namespace std;

int main() {
    float numero, suma = 0;
    int contador = 0;

    cout << "Ingrese numeros positivos (un numero negativo para terminar): " << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break; 
        }

        suma += numero;   
        contador++;  
    }

    if (contador > 0) {
        float promedio = suma / contador;
        cout << "El promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    return 0;
}

