#include<bits/stdc++.h>

using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;

    int st1TotalHeight = 0, st2TotalHeight = 0, st3TotalHeight = 0;

    // pushing consolidated height into the stack instead of individual cylinder
    // height
    for (int i = h1.size() - 1; i >= 0; i--) {
        st1TotalHeight += h1[i];
        st1.push(st1TotalHeight);
    }
    for (int i = h2.size() - 1; i >= 0; i--) {
        st2TotalHeight += h2[i];
        st2.push(st2TotalHeight);
    }
    for (int i = h3.size() - 1; i >= 0; i--) {
        st3TotalHeight += h3[i];
        st3.push(st3TotalHeight);
    }

    while (true) {

        // If any stack is empty
        if (st1.empty() || st2.empty() || st3.empty()) { 
            return 0;
        }

        st1TotalHeight = st1.top();
        st2TotalHeight = st2.top();
        st3TotalHeight = st3.top();

        // If sum of all three stack are equal.
        if (st1TotalHeight == st2TotalHeight && st2TotalHeight == st3TotalHeight) {
            return st1TotalHeight;
        }

        // Finding the stack with maximum sum and
        // removing its top element.
        if (st1TotalHeight >= st2TotalHeight && st1TotalHeight >= st3TotalHeight) {
            st1.pop();
        }
        else if (st2TotalHeight >= st1TotalHeight && st2TotalHeight >= st3TotalHeight) {
            st2.pop();
        }
        else if (st3TotalHeight >= st2TotalHeight && st3TotalHeight >= st1TotalHeight) {
            st3.pop();
        }
    }
}

int main() {
    int n1, n2, n3;
    // cout << "\nEnter sizes of three stacks:\n";
    cin >> n1 >> n2 >> n3;

    vector<int> h1(n1);
    for (int h1_i = 0; h1_i < n1; h1_i++) {
        cin >> h1[h1_i];
    }

    vector<int> h2(n2);
    for (int h2_i = 0; h2_i < n2; h2_i++) {
        cin >> h2[h2_i];
    }

    vector<int> h3(n3);
    for (int h3_i = 0; h3_i < n3; h3_i++) {
        cin >> h3[h3_i];
    }

    cout << equalStacks(h1, h2, h3) << endl;

    return 0;
}