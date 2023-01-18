#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    float numero;
    int positivo = 0;
    
    for(int i = 1; i <= 6; i++) {
        cin >> numero;
        
        if(numero > 0)
            positivo += 1;
    }
    
    cout << positivo << " valores positivos" << "\n";
 
    return 0;
}