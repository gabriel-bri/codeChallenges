#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int A, B, C, maior;

    cin >> A >> B >> C;
    
    maior = (A + B + abs(A-B)) / 2;
    
    if(C > maior)
        maior = C;
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}