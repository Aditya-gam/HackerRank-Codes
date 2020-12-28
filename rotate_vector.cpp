#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

// vector<int> rotateLeft(int d, vector<int> arr) {
//     vector<int> aar(arr.size());
//     vector<int>::iterator i,j;
//     while(d>0){
//         vector<int>::iterator i,j;
//         int first;
//         for(i = arr.begin(),j = aar.begin();i != arr.end();i++) {
//             if(i == arr.begin()){
//                 first = *i;
//                 continue;
//             }
//             *j = *i;
//         }
//         *j = first;
       
//     }
//     return aar;
// }

int main()
{
    int n,d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = rotateLeft(d, arr);
    rotate(arr.begin(), arr.begin()+d, arr.end());// Rotating left
    rotate(arr.begin(), arr.begin() + arr.size() - d, arr.end());// Rotating right
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];

        if (i != arr.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    // fout.close();

    return 0;
}

