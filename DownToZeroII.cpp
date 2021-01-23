#include<bits/stdc++.h>

using namespace std;

int main() {
    int max = 1000001;
    vector<int> nums(max);
    
    //Initialize array
    for(int i = 0; i < max; ++i) {
        nums[i] = -1;
    }
    nums[0] = 0; 
    nums[1] = 1; 
    nums[2] = 2; 
    nums[3] = 3;
    
    //Precompute
    for(int i = 0; i < max; ++i) {
        if(nums[i] == -1 || nums[i] > (nums[i - 1] + 1)) {
            nums[i] = nums[i - 1] + 1;
        }

        for(int j = 1; j <= i && j * i < max; ++j) {
            if(nums[j * i] == -1 || (nums[i] + 1) < nums[j * i]) {
                nums[j * i] = nums[i] + 1;
            }
        }
    }
    
    //Example for 1st 20
    // for(int i = 0; i < 21; ++i) {
    //     cout << "Min for " << i << " is " << nums[i] << endl;
    // }
    int q; 
    cout << "\nEnter Number Of Test Cases: ";
    cin >> q;
    while(q--) {
        int n; 
        cout << "\nEnter a Number: ";
        cin >> n;
        cout << nums[n] << endl;
    }
    return 0;
}