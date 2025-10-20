#include <iostream>
using namespace std;

// Función para verificar si un año es bisiesto
bool esBisiesto(int ano) {
    return (ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0);
}

int main() {
    int ano;
    char continuar;
    
    cout << "VERIFICADOR DE AÑOS BISIESTOS" << endl;
    
    do {
        cout << "\nIngrese el año: ";
        cin >> ano;
        
        if (esBisiesto(ano)) {
            cout << "El año " << ano << " SI es bisiesto." << endl;
        } else {
            cout << "El año " << ano << " NO es bisiesto." << endl;
        }
        
        cout << "\nVerificar otro año? (si/no): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "Fin del programa" << endl;
    return 0;
}
