#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cout << "\nEnter number of test cases: ";
    cin >> q;

    while(q--) {
        string s;
        cout << "\nEnter a string: ";
        cin >> s;

        bool valid = false;
		long firstx = -1;
		// Try each possible starting number
		for (int i=1; i<=s.length()/2; ++i) {
			long x = stoi(s.substr(0,i));
			firstx = x;
		   // Build up sequence starting with this number
			string test = to_string(x);
			while (test.length() < s.length()) {
				test += to_string(++x);
			}
			// Compare to original
			if (test.compare(s)) {
				valid = true;
				break;
			}
		}

        if (valid) {
            cout << "YES " << firstx << endl;
        }
        else {
            cout << "NO" << endl;
        }
        // cout << valid ? "YES " + firstx : "NO" << endl;
    }
}