#include<bits/stdc++.h> 

using namespace std;

vector<int> acceptArray(int n) {
    vector<int> a(n);

    cout << "\nEnter the Elements of Array:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    return a;
}

string twoArrays(int k, vector<int> aa, vector<int> bb) {
    
    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end(), greater<int>());
    for (int i=0;i<aa.size();i++) {
        if (aa[i]+bb[i]<k)    return "NO";
    }
    return "YES";
}

int main() {
    int q;
    cout << "\nEnter number of test cases: ";
    cin >> q;

    while(q--) {
        int n, k;
        cout << "\nEnter n And k:\n";
        cin >> n >> k;

        vector<int> a = acceptArray(n);
        vector<int> b = acceptArray(n);

        cout << twoArrays(k, a, b) << endl;
    }
    
    return 0;
}