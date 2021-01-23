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

    vector<int> points(size);
    vector<string> name(size);

    for(int i = 0; i < size; i++) {
        cin >> name[i];
        cin >> points[i];
    }

    int maxElem = 0;

    for(int i = 1; i < points.size(); i++) {
        if(points[i] > points[maxElem] && points[i] <= 1000) {
            maxElem = i;
        }
    }

    cout << name[maxElem];

    return 0;
}