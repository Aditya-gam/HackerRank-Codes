#include<bits/stdc++.h>

using namespace std;

int minChars(string test) {
    int count=0;
    for (int i = 0; i < test.length()-1; i++) {
        if(test[i]==test[i + 1]) {
            count++;
        } 
    }

    return count;
}

int main() {
    int q;
    cout << "\nEnter Number of Test Cases: ";
    cin >> q;

    while(q--) {
        string a;
        cout << "\nEnter a String: ";
        cin >> a;

        cout << minChars(a) << endl;
    }

    return 0;
}