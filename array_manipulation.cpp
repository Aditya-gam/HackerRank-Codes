#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, max;
    cin >> n >> m;
    vector<int> arr(n+1,0);
    while(m > 0){
        int a, b, k;
        cin>>a>>b>>k;
        for(int i = a;i <= b;i++){
            arr[i] += k;
        }
    }
    max = *max_element(arr.begin(), arr.end()); 
    return 0;

}

/*---time complexity O(n)---*/
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>

// using namespace std;


// int main() {
//     long int n, m, a, b, k, i, j, max=0, x=0;

//     cin >> n >> m;
//     long int *arr = new long int[n + 1]();

//     for(i = 0; i < m ; i++)
//     {
//         cin >> a >> b >> k;
//         arr[a] += k;
//         if((b + 1) <= n) {
//             arr[b + 1] -= k;
//         }
//     }

//     for(i = 1; i <= n; i++)
//     {
//        x = x + arr[i];
//        if(max < x) {
//            max = x;
//        }

//     }

//     cout << max;

//     return 0;
// }