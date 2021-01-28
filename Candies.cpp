#include<bits/stdc++.h> 

using namespace std;

vector<int> acceptArray(int n) {
    vector<int> a(n);

    cout << "\nEnter the Elements of Array:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    return a;
}


int main() {
    int n;
    cout << "\nEnter Size Of Array: ";
    cin >> n;

    vector<int> rating = acceptArray(n);

    sort(rating.begin(), rating.end());

    vector<int> types;
    int temp = rating[0], count = 0;
    types.push_back(1);
    for(int i = 0; i < n; i++) {
        if(rating[i] != temp) {
            types.push_back(1);
            count++;
            temp = rating[i];
        }
        else {
            types[count]++;
        }
    }

    int minCandies = 0;
    for(int i = 0; i < types.size(); i++) {
        minCandies += ((i + 1) * types[i]);
    }

    cout << minCandies << endl;
    return 0;
}


// Python Code
/*
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the candies function below.
def candies(n, arr):
    dp =[1]*n
    for i in range(1,n):
            if arr[i] > arr[i-1]:
                dp[i] = dp[i]+dp[i-1]
    for i in range(n-2,-1,-1):
        if arr[i]>arr[i+1] and dp[i] <= dp[i+1]:
            dp[i]= dp[i+1]+1
    return sum(dp)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = int(input())
        arr.append(arr_item)

    result = candies(n, arr)

    fptr.write(str(result) + '\n')

    fptr.close()

*/