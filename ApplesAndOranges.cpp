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

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)  {
    int acount = 0, ocount = 0;

    for(int i = 0; i < apples.size(); i++) {
        if(a + apples[i] >= s && a + apples[i] <= t) {
            acount++;
        }
    }

    for(int i = 0; i < oranges.size(); i++) {
        if(b + oranges[i] >= s && b + oranges[i] <= t) {
            ocount++;
        }
    }

    cout << acount << endl << ocount << endl;
}

int main() {
    int s, t, a, b, m, n;
    cout << "\nEnter s and t:\n";
    cin >> s >> t;

    cout << "\nEnter a and b:\n";
    cin >> a >> b;

    cout << "\nEnter m and n:\n";
    cin >> m >> n;

    vector<int> apples = acceptArray(m);
    vector<int> oranges = acceptArray(n);

    countApplesAndOranges(s, t, a, b, apples, oranges);
}