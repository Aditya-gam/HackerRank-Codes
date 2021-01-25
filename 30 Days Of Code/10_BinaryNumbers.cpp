#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0, max = 0;

    cin >> n;
    string s = to_string(n);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int binaryNum[32] = {0}; 
    int i = 0; 

    while (n > 0) {  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    for(int j = 0;j < 32; j++){
        if (binaryNum[j] == 1){
            count++;
        }
        if(binaryNum[j] == 0){
            count = 0;
        }
        if(max < count){
            max = count;
        }
    }

    cout << max;
    
    return 0;
}
