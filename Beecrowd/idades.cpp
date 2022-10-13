#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int idades, contador = 0;
    float mediaIdades, somaIdades = 0;
    
    while(idades >= 0) {
        cin >> idades;
        
        if(idades >= 0){
            contador++;
            somaIdades += idades;
        }
    }

    mediaIdades = somaIdades / contador;
    
    cout << fixed << setprecision(2) << mediaIdades << endl;
    
    return 0;
}