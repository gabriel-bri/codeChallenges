#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int numero, quantidade, cont;
    
    cin >> quantidade;

    for(int i = 1; i <= quantidade; i++) {
        cin >> numero;
        
        cont = 0;
        for(int j = 1; j <= numero; j++) {
            if(numero % j == 0) {
                cont++;
            }
        }
        
        if(cont == 2) {
            cout << numero << " eh primo" << endl;
        }
        
        else {
            cout << numero << " nao eh primo" << endl;
        }
    }

    return 0;
}