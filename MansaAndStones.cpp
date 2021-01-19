#include<bits/stdc++.h> 

using namespace std;

void printArray(vector<int> a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

vector<int> stones(int n, int a, int b) {
    vector<int> last;
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--){   
        int item = a * i + b * j;   //finding a,b multiples with i&j
        last.push_back(item);          
    }
    
    sort(last.begin(), last.end()); //Sorting  
    auto it = unique(last.begin(), last.end()); //Removing Duplicates
    last.resize(distance(last.begin(), it));
    return last;
}

int main() {
    int t;
    cout << "\nEnter number of test cases: ";
    cin >> t;

    while(t--) {
        int n, a, b;
        cout << "\nEnter Size Of Array: ";
        cin >> n >> a >> b;

        vector<int> arr = stones(n, a, b);

        printArray(arr);
    }
    return 0;
}