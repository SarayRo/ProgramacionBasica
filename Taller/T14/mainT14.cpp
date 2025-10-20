#include <iostream>
using namespace std;

int main() {
    int numero;
    int positivos = 0, negativos = 0;

    cout << "Ingrese numeros (0 para terminar): " << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
        	
            break; 
            
        } else if (numero > 0) {
            positivos++; 
            
        } else {
            negativos++; 
        }
    }

    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;

    return 0;
}

