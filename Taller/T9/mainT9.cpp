#include <iostream>
using namespace std;

int main() {
    int dia, mes, ano;
    char continuar;
    
    
    cout << "       SIGNOS ZODIACALES" << endl;
    
    
do {
        
    cout << "\nIngrese su fecha de nacimiento:" << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
        
        
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        cout << "Error: Fecha inválida." << endl;
    } else {
            
        string signo;
            
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        signo = "Aries";
    } 
    
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        signo = "Tauro";
    } 
    
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        signo = "Géminis";
    } 
    
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
    	signo = "Cáncer";
    } 
    
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        signo = "Leo";
    } 
    
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        signo = "Virgo";
    } 
    
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        signo = "Libra";
    } 
    
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        signo = "Escorpio";
    } 
    
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        signo = "Sagitario";
    }
    
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        signo = "Capricornio";
    } 
    
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        signo = "Acuario";
    } 
    
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        signo = "Piscis";
    }
            
           
            cout << "\n--- RESULTADO ---" << endl;
            cout << "Fecha de nacimiento: " << dia << "/" << mes << "/" << ano << endl;
            cout << "Su signo zodiacal es: " << signo << endl;
    }
        
        
        cout << "\nDesea verificar otra fecha? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "\nPrograma finalizado! Gracias por usarlo." << endl;
    
    return 0;
}
