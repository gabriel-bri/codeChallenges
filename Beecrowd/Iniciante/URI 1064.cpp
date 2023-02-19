#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    double numero, soma;
    int cont = 0;
    
    for(int i = 0; i < 6; i++) {
        cin >> numero;
        
        if(numero >= 0) {
            soma += numero;
            cont++;
        }
    }
    
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma / cont <<endl;

    return 0;
}