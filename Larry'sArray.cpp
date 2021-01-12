#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        vector<long long int >v(n);
        for(long long int j = 0 ; j < n ; j++) {
            cin >> v[j];
        }
        long long int NumberOfInversions = 0;
        for(long long int i = 0 ; i < n ; i++) {
            for(long long int j = 0 ; j < i ; j++) {
                if(v[j] > v[i]) {
                    NumberOfInversions++;
                }
            }
        }
        if(NumberOfInversions % 2 == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}