#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n, k;
    
    while(t-- > 0) {
        vector<int> s;
        cin >> n >> k;

        for(int j = 1; j <= n; j++) {
            s.push_back(j);
        }

        int max = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if((s[i] & s[j]) < k && (s[i] & s[j]) > max) {
                    max = (s[i] & s[j]);
                }
            }
        }

        cout << max << endl;
    }

    return 0;
}
