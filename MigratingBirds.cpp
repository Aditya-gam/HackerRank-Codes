#include<bits/stdc++.h>

using namespace std;

int main() {
    int size,bird;
    cout << "\nEnter size: ";
    cin >> size;
    vector<int> types(5, 0);
    for(int i = 0; i < size; i++) {
        cin >> bird;
        types[bird - 1]++;
    }
    int maxIndex = 0;
    for(int i = 1; i < types.size(); i++) {
        if(types[i] > types[maxIndex]) {
            maxIndex = i;
        }
    }
    cout << maxIndex + 1;
}