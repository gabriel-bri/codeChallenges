#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int A, B;
    
    cin >> A >> B;
    
    if(A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    }
    
    else {
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}