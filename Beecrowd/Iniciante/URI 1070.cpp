#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int X;
    
    cin >> X;
    
    int count = 0;
    while(count != 6) {
        
        if(X % 2 == 1) {
            cout << X << endl;
            count++;   
        }
        
        X++;
    }
    
    return 0;
}