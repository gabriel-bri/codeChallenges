#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int quantidade, numero;

    cin >> quantidade;
    
    for(int i = 0; i < quantidade; i++) {
        cin >> numero;
        
        if(numero % 2 == 0 && numero > 0){
            cout << "EVEN POSITIVE" << "\n";
        }

        else if(numero % 2 == 1 && numero > 0){
            cout << "ODD POSITIVE" << "\n";
        }
        
        else if(numero % 2 == 0 && numero < 0){
            cout << "EVEN NEGATIVE" << "\n";
        }
        
        else if(numero % 2 == -1 && numero < 0){
            cout << "ODD NEGATIVE" << "\n";
        }
        
        else {
            cout << "NULL" << "\n";
        }
    }
 
    return 0;
}