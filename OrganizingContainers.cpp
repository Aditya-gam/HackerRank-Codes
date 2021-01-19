#include<bits/stdc++.h> 

using namespace std;

int main() {
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;
    while(q--) {    
        int n;
        cout << "\nEnter Size Of Array: ";
        cin >> n;

        vector<int> a(n), b(n);
        int x;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> x;
                a[i] += x;
                b[j] += x;
            }
        }

        string pts = "Possible";
        for(int i = 0; i < n; i++) {
            int j = 0;
            for(j = i; j < n; j++) {
                if(a[i] == b[j]) {
                    int temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                    break;
                }
            }
            if(j==n) {
                pts = "Impossible";
                break;
            }
        }
        cout << pts << endl;
    }

    return 0;
}