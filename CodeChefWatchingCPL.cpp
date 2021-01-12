#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cout << "\nEnter number of test cases: ";
    cin >> t;

    while(t--) {
        int n, k;
        cout << "\nEnter n and k:\n";
        cin >> n, k;
        vector<int> heights(n);
        cout << "\nEnter Heights:\n";
        for(int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int mheight = 0, mcount = 0, theight = 0, tcount = 0, index;

        while(mheight < k) {
            int min = INT_MAX;
            for(int i = 0; i < heights.size(); i++) {
                if(k - mheight - heights[i] < min) {
                    min = k - mheight - heights[i];
                    index = i;
                }
            }
            mheight += min;
            mcount++;
            swap(heights[index], heights[heights.size() - 1]);
            heights.pop_back();
        }
        sort(heights.begin(), heights.end());
        for(int i = heights.size() - 1; i >= 0; i--) {
            theight += heights[i];
            tcount++;
            if(theight >= k) {
                break;
            }
        }
        if(mheight >= k && theight >= k) {
            cout << tcount + mcount << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
}