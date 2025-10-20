#include <iostream>
using namespace std;

// Funci�n para verificar si un a�o es bisiesto
bool esBisiesto(int ano) {
    return (ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0);
}

int main() {
    int ano;
    char continuar;
    
    cout << "VERIFICADOR DE A�OS BISIESTOS" << endl;
    
    do {
        cout << "\nIngrese el a�o: ";
        cin >> ano;
        
        if (esBisiesto(ano)) {
            cout << "El a�o " << ano << " SI es bisiesto." << endl;
        } else {
            cout << "El a�o " << ano << " NO es bisiesto." << endl;
        }
        
        cout << "\nVerificar otro a�o? (si/no): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "Fin del programa" << endl;
    return 0;
}
