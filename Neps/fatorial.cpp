#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	int N, fatorial = 1;
	
	cin >> N;
	
	for(int i = N; i > 0; i--){
		fatorial *= i;
	}
	
	cout << fatorial;
	
    return 0;
}
