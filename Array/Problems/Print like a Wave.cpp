// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
      vector<int> ans;
        for(int i=0;i<mCols;i++){
            if(i%2==0)
                for(int j=0;j<nRows;j++)
                      ans.push_back(arr[j][i]);
            else
                for(int j=0;j<nRows;j++)
                      ans.push_back(arr[nRows-j-1][i]);
        }
    return ans;
}


int main(){

    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int row=matrix.size(), col=matrix[0].size();

    vector<int> v = wavePrint(matrix,row,col);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
return 0;
}