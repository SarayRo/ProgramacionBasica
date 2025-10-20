#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int numeroSecreto, intento, intentos = 0;
    char jugarOtraVez;
    
    // Semilla para números aleatorios
    srand(time(0));
    
  
    cout << "     JUEGO: ADIVINA EL NUMERO" << endl;
    
    cout << "Adivina el numero secreto entre 1 y 10" << endl;
    
    do {
        
        numeroSecreto = rand() % 10 + 1;
        intentos = 0;
        
        cout << "\n--- NUEVO JUEGO ---" << endl;
        cout << "Hemos generado un numero entre 1 y 10. Adivinalo!" << endl;
        
       
        do {
            cout << "Ingresa tu intento: ";
            cin >> intento;
            intentos++;
            
            if (intento < 1 || intento > 10) {
                cout << "Por favor, ingresa un numero entre 1 y 10." << endl;
            } 
            else if (intento < numeroSecreto) {
                cout << "El numero secreto es MAYOR que " << intento << endl;
            } 
            else if (intento > numeroSecreto) {
                cout << "El numero secreto es MENOR que " << intento << endl;
            } 
            else {
                
                cout << "\nFELICIDADES! Adivinaste el numero!" << endl;
                cout << "El numero secreto era: " << numeroSecreto << endl;
                cout << "Lo lograste en " << intentos << " intento(s)" << endl;
                
                
                if (intentos == 1) {
                    cout << "INCREIBLE! A la primera!" << endl;
                } else if (intentos <= 3) {
                    cout << "Excelente trabajo!" << endl;
                } else if (intentos <= 5) {
                    cout << "Buen trabajo!" << endl;
                } else {
                    cout << "Sigue practicando!" << endl;
                }
            }
            
        } while (intento != numeroSecreto);
        
        
        cout << "\nQuieres jugar otra vez? (s/n): ";
        cin >> jugarOtraVez;
        
    } while (jugarOtraVez == 's' || jugarOtraVez == 'S');
    
    cout << "\nGracias por jugar, hasta la proxima!" << endl;

    return 0;
}
