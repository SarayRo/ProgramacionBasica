#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int fahr;
	double celsius;
    double lower, upper, step;

    cout << "Farenheit\tCelsius" << endl;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fixed << setprecision(3) << fahr << "\t\t" << celsius << endl;
        fahr = fahr + step;
    }

    return 0;
}

