#include <iostream>
#include <math.h>
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
    
    double delta = (B *B) - 4 * A * C;
    
    if(delta < 0 || A == 0) {
        cout << "Impossivel calcular" << endl;
    }
    
    else {
        double raiz_um = ((-1 * B)  + sqrt(delta)) / (2 * A);
        double raiz_dois = ((-1 * B)  - sqrt(delta)) / (2 * A);
        
        cout << "R1 = " << fixed << setprecision(5) << raiz_um << endl;
        cout << "R2 = " << fixed << setprecision(5) <<raiz_dois << endl;
    }
    return 0;
}