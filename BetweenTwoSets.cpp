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

int gcd_1 (int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd(vector<int> b) {
    int res = b[0];
    for (int i = 1; i < b.size(); i++) {
        res = gcd_1(res, b[i]);
    }
    return res;
}

int lcm_1(int a, int b) {
    return a * (b / gcd_1(a, b));
}

int lcm(vector<int> a) {
    int res = a[0];
    for(int i = 1; i < a.size(); i++) {
        res = lcm_1(res, a[i]);
    }
    return res;
}

int countNumbers(vector<int> a, vector<int> b) {
    int l = lcm(a);
    int g = gcd(b);

    int count = 0;
    for(int i = l, j = 2; i <= g; i = l * j, j++) {
        if(g % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    cout << "\nEnter Size Of Array: ";
    cin >> n >> m;

    vector<int> a = acceptArray(n);
    vector<int> b = acceptArray(m);

    cout << countNumbers(a, b);

    return 0;
}