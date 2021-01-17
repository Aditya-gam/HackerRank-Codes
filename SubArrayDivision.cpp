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

int birthday(vector<int> s, int d, int m) {
    int sum = 0,ways=0;
    for (int i = 0; i < m; i++) {
        sum += s[i];
    }
    for (int i = 0; i < s.size() - m + 1; i++) {
        if (sum == d) {
            ways++;
        }
        if (i + m < s.size()) {
            sum = sum - s[i] + s[i + m];
        }
    }
    return ways;
}

int main() {
    int n;
    cout << "\nEnter Value of n: ";
    cin >> n;

    vector<int> s = acceptArray(n);

    int d, m;
    cout << "\nEnter d and m:\n";
    cin >> d >> m;

    cout << birthday(s, d, m);

    return 0;
}