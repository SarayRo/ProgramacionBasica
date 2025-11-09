#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   // límite inferior
    upper = 300; // límite superior
    step = 20;   // tamaño del paso

    fahr = lower;

while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\tc : " << celsius << endl;
        fahr = fahr + step;
    }

    return 0;
}
