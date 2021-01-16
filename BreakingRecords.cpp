#include<bits/stdc++.h> 

using namespace std;

struct score {
    int min = 0;
    int max = 0;
};

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

struct score breakingRecords(vector<int> a) {
    struct score scr;
    int minScore = a[0], maxScore = a[0];

    for(int i = 1; i < a.size(); i++) {
        if(a[i] > maxScore) {
            maxScore = a[i];
            scr.max++;
        }
        else if(a[i] < minScore) {
            minScore = a[i];
            scr.min++;
        }
    }
    return scr;
}

int main() {
    int n;
    cout << "\nEnter Size Of Array: ";
    cin >> n;

    vector<int> arr = acceptArray(n);

    struct score fin;

    fin = breakingRecords(arr);

    cout << fin.max << " " << fin.min << endl;

    return 0;
}