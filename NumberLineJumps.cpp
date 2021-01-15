#include<bits/stdc++.h> 

using namespace std;

void kangaroo(int x1, int v1, int x2, int v2) {
    if(v1 > v2 && (x1 - x2) % (v2 - v1) == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    int x1, x2, v1, v2;
    cout << "\nEnter x1 and v1:\n";
    cin >> x1 >> v1;

    cout << "\nEnter x2 and v2:\n";
    cin >> x2 >> v2;

    kangaroo(x1, v1, x2, v2);
    return 0;
}