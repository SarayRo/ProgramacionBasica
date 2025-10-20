#include <iostream>
using namespace std;

int main() {
    int N, M;
    char opcion;

    do {
        int contador = 0;

        cout << "Ingrese el primer numero (N): ";
        cin >> N;
        cout << "Ingrese el segundo numero (M): ";
        cin >> M;

        if (N <= M) {
            cout << "Error: el primer numero debe ser mayor que el segundo." << endl;
        } else {
            cout << "Los tres primeros numeros pares entre " << N << " y " << M << " son:" << endl;

            for (int i = M + 1; i < N; i++) {
                if (i % 2 == 0) { 
                    cout << i << " ";
                    contador++;
                }
                if (contador == 3) {
                    break; 
                }
            }

            if (contador < 3) {
                cout << "\nNo hay tres numeros pares entre los valores ingresados." << endl;
            }

            cout << endl;
        }

        cout << "\nDesea volver a empezar? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S'); 

    cout << "\nPrograma finalizado." << endl;
    return 0;
}

