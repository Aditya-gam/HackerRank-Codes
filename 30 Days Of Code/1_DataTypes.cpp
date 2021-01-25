#include <iostream>
#include <iomanip>
#include <limits>
#include<bits/stdc++.h> //Added to avoid error for getline

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double d1;
    string a;
    cin >> j;
    cin >> d1;
    cin.ignore();
    getline(cin, a);    //Works on hacker Rank ide
    j += i;
    d =(double)(d1 + d);
    string res = s + a;
    cout << j << endl;
    cout << d << endl;
    cout << res;

    return 0;
}