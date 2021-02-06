#include<bits/stdc++.h>

using namespace std;

int commonChild(string a, string b) {
    vector<vector<int>> c(a.length()+1, vector<int> (b.length()+1));

    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            if (a[i] == b[j]) {
                c[i+1][j+1] = c[i][j] + 1;
            } else {
                c[i+1][j+1] = max(c[i+1][j], c[i][j+1]);
            }
        }
    }

    return c[a.length()][b.length()];
}

int main() {
    string str1, str2;
    cout << "\nEnter two string:\n";
    cin >> str1 >> str2;

    cout << commonChild(str1, str2) << endl;

    return 0;
}