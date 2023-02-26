
#include <bits/stdc++.h>

using namespace std;

//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    
	    int sum = 0;
	    
	    for(int i = 0; i < n; i++) {
	        sum += arr[i];    
	    }
	    
	    return sum;
	}
};
