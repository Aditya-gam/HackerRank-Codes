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

int getMinimumCost(int k, vector<int> c) {
    sort(c.begin(), c.end(), greater<int>());   
    // printArray(c); 
    int n = c.size(), price = 0, prev = 0;
    for (int i = 0, j = k - 1; i < n; i++) {   //add max. cost flower first to minimise price
        price += c[i] * (prev + 1);
        if(i == j) {  //if a customer bought k flowers
            prev++;
            j += k;
        }
    }    
    return price;
}

int main() {
    int size, k;
    cout << "\nEnter Size Of Array: ";
    cin >> size >> k;

    vector<int> arr = acceptArray(size);

    cout << getMinimumCost(k, arr);
    return 0;
}