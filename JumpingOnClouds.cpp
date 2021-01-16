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

void printArray(vector<int> a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int jumpingClouds(vector<int> c, int k) {
    int e = 100, i = 0;
    i = (i + k) % c.size();
    e--;
    if(c[i] == 1) {
        e -= 2;
    }
    while(e >= 0 && i != 0) {
        i = (i + k) % c.size();
        e--;
        if(c[i] == 1) {
            e -= 2;
        }
    }
    return e;
}

int main() {
    int n, k;
    cout << "\nEnter Size Of Array: ";
    cin >> n >> k;

    vector<int> arr = acceptArray(n);

    cout << jumpingClouds(arr, k);
    // printArray(arr);

    return 0;
}