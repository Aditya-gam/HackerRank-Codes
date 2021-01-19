#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cout << "\nEnter number of test cases: ";
    cin >> t;

    while(t--) {
        unsigned long long a = 4294967295, num;
        cout << "\nEnter  a number: ";
        cin  >> num;

        cout << a - num  << endl;  
    }
    return 0;
}