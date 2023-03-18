#include<bits/stdc++.h> 
using namespace std;


class Solution{
public:
    long long int factorial(int N){
        //code here
        
        if (N == 0 || N == 1)
            return 1;
        
        return N * factorial(N - 1);
    }
};
