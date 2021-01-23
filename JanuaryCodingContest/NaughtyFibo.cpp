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

// void printArray(vector<int> a) {
//     for(int i = 0; i < a.size(); i++) {
//         cout << a[i] << " ";
//     }
//     cout << "\n";
// }

int main() {
    int size;
    cout << "\nEnter Size Of Array: ";
    cin >> size;

    vector<int> arr = acceptArray(size);

    sort(arr.begin(), arr.end());
    int ans = 0, count = 2; 
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] + arr[i - 1] == arr[(i + 1) % size]) {
            count++;
        }
        else {
            count = 2;
        }
        ans = max(ans, count);
    }

    cout << ans;
    // printArray(arr);

    return 0;
}