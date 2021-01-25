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

int maxToys(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    int sum = 0, count = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        if(sum + arr[i] <= k) {
            sum += arr[i];
            count++;
        }
    }
    return count;
}

int main() {
    int size, k;
    cout << "\nEnter Size Of Array: ";
    cin >> size >> k;
    
    vector<int> arr = acceptArray(size);

    cout << maxToys(arr, k);
    // printArray(arr);

    return 0;
}