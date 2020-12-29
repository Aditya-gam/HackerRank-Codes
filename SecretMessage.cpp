#include<bits/stdc++.h>

using namespace std;

vector<int> decToBinary(long n) 
{ 
    // array to store binary number 
    vector<int> binaryNum(32, 0); 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    return binaryNum;
}
  
// Driver program to test above function 
int main() 
{ 
    long p, q, count = 0;
    cin >> p >> q; 
    vector<int> num1 = decToBinary(p);
    vector<int> num2 = decToBinary(q); 
    for(int i = 0;i < num2.size(); i++){
        if(num1[i] != num2[i]){
            count++;
        }
    }
    cout << count;
    return 0; 
} 