// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include <iostream>
#include <vector>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
        
    int rowIndex = 0;
    int colIndex = col-1;
        
    while(rowIndex<row && colIndex>=0){
        int element = matrix[rowIndex][colIndex];
            
        if(element==target){
            return 1;
        }else if(element<target){
            rowIndex++;
        }else{
            colIndex--;
        }
            
    }
        
    return 0;
}

int main(){

    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 104;

    bool ans = searchMatrix(matrix,target);
    if(ans==1)  cout<<"Target is present in the matrix"<<endl;
    else    cout<<"Target is not present in the matrix"<<endl;

    return 0;
}