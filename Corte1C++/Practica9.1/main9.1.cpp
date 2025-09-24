#include <iostream>
using namespace std;

int sumar (int a, int b){
	int r = a + b;
	return r;
}

int restar(int h, int x){
	
	int d=h-x;
	return d;
	
}

int multiplicar(int z, int y){
	
	int j = z * y;
	return j;
}

int main() {
    int r = sumar (7, 31);
	cout << r << endl;
	
	int d = restar (5, 8);
	cout << d << endl;
	
	int j = multiplicar (9, 5);
	cout << j << endl;
	
}


