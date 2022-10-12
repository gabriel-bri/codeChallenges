#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Seu código vai aqui
    double x, y, resultado;
    cin >> x >> y;

    int contador = 0;
    double potencia = 1;

    while(contador != (int) y) {
       potencia = potencia * x;
       contador = contador + 1;
    }

    cout << fixed << setprecision(4) << potencia << endl;
    return 0;
}