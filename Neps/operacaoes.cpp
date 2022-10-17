#include <iostream>
#include <iomanip>
#include<string.h>

using namespace std;

int main() {
    char op;
    double A, B, resultado;
    
    cin >> op >> A >> B;
    

    switch(op) {
        case 'M':
            resultado = A * B;
        break;
        
        case 'D':
            resultado = A / B;
        break;
    }
    
    cout << fixed << setprecision(2) << resultado << endl;

    return 0;
}
