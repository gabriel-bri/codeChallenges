#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int numero;

    cin >> numero;

    for(int i = 1; i <= numero ; i++) {
        if(i % 2 == 1) {
            cout << i << endl;
        }
    }

    return 0;
}