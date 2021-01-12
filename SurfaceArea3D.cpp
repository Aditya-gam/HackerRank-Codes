#include<bits/stdc++.h>

using namespace std;

int contribution_height(int current, int previous) { 
    return abs(current - previous); 
} 

int surfaceArea(vector<vector<int>> arr, int n, int m) {

    int ans = 0; 
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
  
            int top = 0; 

            int left = 0; 
  
            if (i > 0) {
                top = arr[i - 1][j];
            } 
 
            if (j > 0) {
                left = arr[i][j - 1]; 
            }

            ans += contribution_height(arr[i][j], top)  + contribution_height(arr[i][j], left); 
  
            if (i == n - 1) {
                ans += arr[i][j]; 
            }
            
            if (j == m - 1) {
                ans += arr[i][j];
            } 
        } 
    } 
  
    ans += n * m * 2; 
    return ans; 
}

int main() {
    int n, m;
    cout << "\nEnter height and weight:\n";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int> (m));
    cout << "\nEnter elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    // cout << surfaceArea(arr, n, m);
    int result = surfaceArea(arr, n, m); 
    cout << "\nResult: " << result << endl;
}