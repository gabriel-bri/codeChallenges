#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
   
    int A, B, C, maior;

    cin >> A >> B >> C;
    
    maior = (A + B + abs(A-B)) / 2;
    
    if(C > maior)
        maior = C;
    
    cout << maior;
    
    return 0;
}