// contest code
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,p,f;
    int ans = 1;
    cin>>t;
    while(t>0){
        cin>>p>>f;
        int low = 1,high = f,mid;
        mid = (high + low)/2;
        while(low<high){
            ans++;
            low = mid + 1;
            mid = (high + low)/2;
        }
        cout<<ans;
        t--;
    }
}   




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,p,f;
    cin>>t;
    while(t>0){
        cin>>p>>f;
        int ans;
        ans = log2(f) + 1;
        cout<<ans;
        t--;
    }
    return 0;
}