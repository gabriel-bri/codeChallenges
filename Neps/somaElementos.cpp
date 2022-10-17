#include <iostream>
#include <iomanip>
#include<string.h>

using namespace std;

int main() {
    int tamanho, soma = 0;
    
    cin >> tamanho;
    
    int elementos[tamanho];
    
    
    for(int i = 0; i < tamanho; i++) {
        cin >> elementos[i];
        soma += elementos[i];
    }
    
    cout << soma << endl;
    return 0;
}
