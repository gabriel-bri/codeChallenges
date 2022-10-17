#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
	float A, B;
	
	cin >> A >> B;
	
	float media = ((A*2) + (B*3)) / 5;
	
	if(media >= 7)
		cout << "Aprovado";
	else if(media < 3)
		cout << "Reprovado";
	else
		cout << "Final";
	
    return 0;
}
