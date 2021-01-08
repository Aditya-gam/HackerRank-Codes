#include<bits/stdc++.h>

using namespace std;

bool isBalanced(string s) {
    stack<char> bracket;
    stack<int> index;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '{'){
            bracket.push('}');
        }

        if(s[i] == '['){
            bracket.push(']');
        }

        if(s[i] == '('){
            bracket.push(')');
        }
        
        // if(bracket.empty()){
        //     return true;
        // }
        // else{
        //     if(s[i] == '}' && bracket.top() == '}') {
        //         bracket.pop();
        //         continue;
        //     }
        //     if(s[i] == ']' && bracket.top() == ']') {
        //         bracket.pop();
        //         continue;
        //     }
        //     if(s[i] == ')' && bracket.top() == ')') {
        //         bracket.pop();
        //         continue;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        if(s[i] == '}'){

            if(bracket.empty()){
                return false;
            }

            if(bracket.top() == '}'){
                bracket.pop();
                continue;
            }
            else{
                return false;
            }

        }
        if(s[i] == ']'){

            if(bracket.empty()){
                return false;
            }

            if(bracket.top() == ']'){
                bracket.pop();
                continue;
            }
            else{
                return false;
            }

        }
        if(s[i] == ')'){

           if(bracket.empty()){
                return false;
            }

            if(bracket.top() == ')'){
                bracket.pop();
                continue;
            }
            else{
                return false;
            }

        }    
    }
    if(bracket.empty()){
        return true;
    }
    else{
        return false;
    } 
}

int main() {
    int t;
    cout << "\nEnter number of test cases: ";
    cin >> t;

    while(t--) {
        string s;
        cout << "\nEnter a string: ";
        cin >> s;

        if(isBalanced(s)) {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}