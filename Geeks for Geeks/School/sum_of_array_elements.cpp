#include <bits/stdc++.h>
using namespace std;

//Complete this function

int sumElement(int arr[],int n)
{
    int sum = 0;
    //Your code here
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}
