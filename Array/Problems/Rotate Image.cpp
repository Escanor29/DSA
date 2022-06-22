// https://leetcode.com/problems/rotate-image/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    // Transpose 
    for(int i=0;i<matrix.size();i++)
        for(int j=0;j<i;j++)
            swap(matrix[i][j],matrix[j][i]);
        
    // Reverse Every Row     
    for(int i=0;i<matrix.size();i++)
        reverse(matrix[i].begin(),matrix[i].end());
        
}

int main(){

    vector<vector<int>> m={{1,2,3},{4,5,6},{7,8,9}};

    rotate(m);

    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[0].size();j++){
            cout<<m[i][j]<<" ";   
        }cout<<endl;
    }
return 0;
}