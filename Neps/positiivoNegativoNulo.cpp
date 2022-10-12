#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int X;
    cin >> X;

    // Seu código vai aqui
	if(X > 0)
		cout << "positivo";
	else if(X == 0)
		cout << "nulo";
	else
		cout << "negativo";
    return 0;
}
