#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int numero;
    int cont = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> numero;
        
        if(numero % 2 == 0) {
            cont++;
        }
    }
    
    cout << cont << " valores pares" << endl;

    return 0;
}