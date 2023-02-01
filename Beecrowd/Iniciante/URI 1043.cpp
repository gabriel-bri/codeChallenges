#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    double A, B, C;

    cin >> A >> B >> C;
    
    if(A + B > C && B + C > A && C + A > B) {
        cout << "Perimetro = " << fixed << setprecision(1) << A + B + C << endl; 
    }
    
    else {
        cout << "Area = " << fixed << setprecision(1) << ((A + B) * C) / 2 << endl; 
    }
    return 0;
}