#include <bits/stdc++.h> 
#define MAX 100 
using namespace std; 
  
int difference(int arr[][MAX], int n) 
{ 
    // Initialize sums of diagonals 
    int d1 = 0, d2 = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            // finding sum of primary diagonal 
            if (i == j) 
                d1 += arr[i][j]; 
  
            // finding sum of secondary diagonal 
            if (i == n - j - 1) 
                d2 += arr[i][j]; 
        } 
    } 
  
    // Absolute difference of the sums 
    // across the diagonals 
    return abs(d1 - d2); 
} 
  
// Driven Program 
int main() 
{ 
    int n,i,j;
    cin>>n;
  
    int arr[MAX][MAX];
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            cin>>arr[i][j];
        }
    }
    cout << difference(arr, n); 
    return 0; 
} 
