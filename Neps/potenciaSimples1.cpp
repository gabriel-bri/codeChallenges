#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	// Seu código vai aqui

    double x, y;
	
    cin >> x >> y;
	
    cout << fixed << setprecision(4) << pow(x, y);
}