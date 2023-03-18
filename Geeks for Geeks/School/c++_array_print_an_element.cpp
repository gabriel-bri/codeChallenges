#include <iostream>
using namespace std;

class Solution{
    public:
    int findElementAtIndex(int a[], int n, int key) 
    {
        // Your code goes here
        for(int i = 0; i < n; i++) {
            if(i == key) {
                return a[i];
            }
        }
    }
};
