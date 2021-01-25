#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    
    while(t--) { 
        string se,so,s;
        cin>>s;
        for(int i = 0; i < s.length(); i+=2) {
            se += s[i];
        }
        for(int i = 1; i < s.length(); i+=2) {
            so += s[i];
        }
        cout << se << " " << so<<endl;
    }
    
    return 0;
}
