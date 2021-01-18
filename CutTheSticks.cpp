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
        cout << a[i] << endl;
    }
    cout << "\n";
}

vector<int> cutTheSticks(vector<int> arr) {
    vector<int> res;
    res.push_back(arr.size());
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {
            res.push_back(arr.size() - i);
        }
    }
    // int i = 0;
    // res.push_back(arr.size());
    // while(arr.size() > 1) {
        
    //     for(int j = 0; j < arr.size(); j++) {
    //         arr[j] -= arr[i];
    //     }

    //     for(vector<int>::iterator j = arr.begin(); j != arr.end(); j++) {
    //         if(*j == 0) {
    //             arr.erase(j);
    //         }
    //     }
    //     res.push_back(arr.size());
    // }  
    return res; 
}

int main() {
    int size;
    cout << "\nEnter Size Of Array: ";
    cin >> size;

    vector<int> arr = acceptArray(size), res;

    res = cutTheSticks(arr);

    printArray(res);

    return 0;
}