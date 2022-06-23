// https://leetcode.com/problems/search-a-2d-matrix/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
        
    int start = 0;
    int end = row*col-1;
    int mid;
        
    while(start<=end){
        mid = start + (end-start)/2;
        int element = matrix[mid/col][mid%col];
            
        if(element==target){
            return true;
        }else if(element<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
            
    }
        
    return false;
}

int main(){

    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int target = 9;

    bool ans = searchMatrix(matrix,target);
    if(ans==1)  cout<<"Target is present in the matrix"<<endl;
    else    cout<<"Target is not present in the matrix"<<endl;

    return 0;
}