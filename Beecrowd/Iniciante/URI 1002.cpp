#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double area, raio;
    
    cin >> raio;
    
    area = 3.14159 * raio * raio;
    cout << "A=" << fixed << setprecision(4) << area << endl;
    
    return 0;
}