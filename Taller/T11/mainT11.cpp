#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena_correcta = "123"; 
    string contrasena;
    int intentos = 0;

    while (intentos < 3) {
        
		cout << "\nPista: La contrase�a es una secuencia numerica de tres digitos" << endl;
		cout << "Ingrese la contrase�a: ";
        cin >> contrasena;

        if (contrasena == contrasena_correcta) {
            cout << "Contrase�a Correcta" << endl;
            return 0; 
        } else {
            cout << "Lo siento, contrase�a equivocada" << endl;
            intentos++;
        }
    }

    cout << "Ha superado el numero maximo de intentos." << endl;
    return 0;
}

