#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int numero, horasTrabalhadas;
    double salarioHora;
    
    cin >> numero >> horasTrabalhadas >> salarioHora;
    
    double salarioFinal = horasTrabalhadas * salarioHora;
    
    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salarioFinal << endl;
    return 0;
}