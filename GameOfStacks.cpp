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

int playGame(vector<int> a, vector<int> b, int x) {
    stack<int> aa, bb;

    for(int i = a.size() - 1; i >= 0; i++) {
        aa.push(a[i]);
    }
    for(int i = b.size() - 1; i >= 0; i++) {
        bb.push(b[i]);
    }

    int sum = 0, count = 0;
    while(sum + aa.top() < x || sum + bb.top() < x) {
        if(aa.top() < bb.top()) {
            sum += aa.top();
            aa.pop();
            count++;
        }
        else if(bb.top() < aa.top()) {
            sum += bb.top();
            bb.pop();
            count++;
        }
        else {
            sum += aa.top();
            aa.pop();
            count++;
        }
    }
    cout << count << endl;
    return count;
}

int main() {
    int t;
    cout << "\nEnter Number of Test Cases: ";
    cin >> t;

    while(t--) {
        int n, m, x;
        cout << "\nEnter Sizes of stack and higest sum:\n";
        cin >> n >> m >> x;

        vector<int> a(n), b(m);
        a = acceptArray(n);
        b = acceptArray(m);

        cout << playGame(a, b, x) << endl; 
    }
}