#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int A, fatorial = 1;
    
    cin >> A;
    
    for(int i = A; i > 0; i--) {
        fatorial *= i;
    }
    
    cout <<  fatorial << "\n";
    return 0;
}