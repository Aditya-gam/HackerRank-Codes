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

int main() {
    int size;
    cout << "\nEnter Size Of Array: ";
    cin >> size;

    vector<int> arr = acceptArray(size);

    printArray(arr);

    return 0;
}