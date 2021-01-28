#include<bits/stdc++.h> 

using namespace std;

int minNumber(string a, string b) {
    vector<int> aa(26, 0);
    for(int i = 0; i < a.length(); i++) {
        aa[a[i] - 'a']++;
    }

    for(int i = 0; i < b.length(); i++) {
        aa[b[i] - 'a']--;
    }

    int count = 0;
    for(int i = 0; i < aa.size(); i++) {
        count += abs(aa[i]);
    }

    return count;
}

int main() {
    string a, b;
    cout << "\nEnter Two Strings:\n";
    cin >> a >> b;

    cout << minNumber(a, b) << endl;
    return 0;
}