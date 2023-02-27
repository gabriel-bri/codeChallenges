#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int number = N;
        
        int count = 0, rest;
        
        while(number > 0) {
            rest = number % 10;
            
            if(rest > 0) {
                if(N % rest == 0) {
                    count++;
                }
            }
            
            number = number / 10;
        }
        
        return count;
    }
};