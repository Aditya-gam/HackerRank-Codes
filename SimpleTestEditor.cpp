#include<bits/stdc++.h>

using namespace std;

int main() {
    string S = ""; 
    int Q; 
    cin >> Q;

    stack<string> prev_string_state;

    while (Q--) {
        int t, K;
        string temp;
        cin >> t;

        switch(t) {
            case 1:
                prev_string_state.push(S);
                cin >> temp;
                S.append(temp);
                break;
            case 2:
                prev_string_state.push(S);
                cin >> K;
                S.erase(S.end()-K, S.end());
                break;
            case 3:
                cin >> K;
                cout << S[K-1] << endl;
                break;
            case 4:
                S = move(prev_string_state.top());
                prev_string_state.pop();
                break;
        }
    }

    return 0;
}