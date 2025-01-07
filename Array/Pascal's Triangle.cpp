/*
https://leetcode.com/problems/pascals-triangle/description/
https://www.codingninjas.com/studio/problems/print-pascal-s-triangle_6917910
Given an integer n, return the first n rows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Variation 1: Given row number n and column number r. 
// Print the element at position (n, r) in Pascal’s triangle.
    int nCr(int n, int r){
        int res=1;
        for(int i=0;i<r;i++){
            res*=(n-i);
            res/=(i+1);
        }

        return res;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> row;
            for(int j=1;j<=i;j++){
                if(j==1 || j==i)
                    row.push_back(j);
                else{
                    int val = ans[i-1][j-1]+ans[i-1][j];
                    row.push_back(val);
                }
            }
            ans.push_back(row);
        }
    
    return ans;
    }
};

int main(){
    int n,r;
    cin>>n>>r;
    Solution soln;
    vector<vector<int>> ans = soln.generate(n);
    for (auto row : ans) {
        for (auto num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    // //Find nth row & rth column element 
    // int res= soln.nCr(n-1,r-1);
    // cout<<res<<endl;

    return 0;
}