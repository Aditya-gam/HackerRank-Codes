#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    while(q--) {
        string str;
        cout << "\nEnter a String: ";
        cin >> str;
        int count = 0, j = str.length() - 1;
        for(int i = 0; i < j; i++, j--) {
            count += abs(str[i] - str[j]);
        }
        cout << count << endl;
    }
}