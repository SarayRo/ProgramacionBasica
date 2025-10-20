#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena_correcta = "123"; 
    string contrasena;
    int intentos = 0;

    while (intentos < 3) {
        
		cout << "\nPista: La contraseña es una secuencia numerica de tres digitos" << endl;
		cout << "Ingrese la contraseña: ";
        cin >> contrasena;

        if (contrasena == contrasena_correcta) {
            cout << "Contraseña Correcta" << endl;
            return 0; 
        } else {
            cout << "Lo siento, contraseña equivocada" << endl;
            intentos++;
        }
    }

    cout << "Ha superado el numero maximo de intentos." << endl;
    return 0;
}

