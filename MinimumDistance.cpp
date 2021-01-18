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

int minimumDistance(vector<int> a) {
    int min = a.size();
    for(int i = 0; i < a.size()-  1; i++){
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] == a[j]){
                if(min > (j - i)){
                    min = j - i;
                    break;
                }
            }
        }
    }
    if(min == a.size()){
        return -1;
    }
    return min;
}

int main() {
    int size;
    cout << "\nEnter Size Of Array: ";
    cin >> size;

    vector<int> arr = acceptArray(size);

    cout << minimumDistance(arr);

    return 0;
}