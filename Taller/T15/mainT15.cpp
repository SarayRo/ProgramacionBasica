#include <iostream>
using namespace std;

int main() {
    int numero;
    char opcion;

    do {
        bool esPrimo = true;

        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero <= 1) {
            esPrimo = false; 
            
        } else {
        	
            for (int i = 2; i <= numero / 2; i++) {
            	
                if (numero % i == 0) {
                	
                    esPrimo = false;
                    
                    break; 
                }
            }
        }

        if (esPrimo)
            cout << numero << " es un numero primo." << endl;
        else
            cout << numero << " no es un numero primo." << endl;

        cout << "\nDesea volver a empezar? (s/n): ";
        
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S'); 

    cout << "Programa finalizado." << endl;
    return 0;
}

