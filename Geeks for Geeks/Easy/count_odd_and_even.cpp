// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

void countOddEven(int a[], int n) {
    // code here
    
    int oddCount = 0;
    int evenCount = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            evenCount++;
        }
        
        else {
            oddCount++;
        }
    }
    
    cout << oddCount << " " << evenCount;
}