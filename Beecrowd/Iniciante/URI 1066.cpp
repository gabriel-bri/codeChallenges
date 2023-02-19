#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int numero;
    int contPares = 0, contImpares = 0, contNegativos = 0, contPositivos = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> numero;
        
        if(numero % 2 == 0) {
            contPares++;
        }
        
        else {
            contImpares++;
        }
        
        if(numero < 0) {
            contNegativos++;
        }
        
        if(numero > 0) {
            contPositivos++;
        }
    }
    
    cout << contPares << " valor(es) par(es)" << endl;
    cout << contImpares << " valor(es) impar(es)" << endl;
    cout << contPositivos <<" valor(es) positivo(s)" << endl;
    cout << contNegativos << " valor(es) negativo(s)" << endl;

    return 0;
}