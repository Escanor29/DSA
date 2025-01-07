// https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        int A[2001],B[2001];
        for(int i = 0;i<2001;i++){
            A[i] = 0;
            B[i] = 0;
        }
        for(int i = 0;i<(int)(arr.size());i++){
            if(arr[i]>=0){
                A[arr[i]]++;
            }
            else{
                A[arr[i]+2001]++;
            }
        }
        for(int i=0;i<6;i++)
        cout<<endl;
        for(int i = 0;i<2001;i++){
            if(A[i])                           //A[i]!=0
              B[A[i]]++;  
            
        }
        
        for(int i=0;i<6;i++) 
        cout<<endl;
        for(int i = 0;i<2001;i++){
            if(B[i]>1) return false;
        }
        return true;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<uniqueOccurrences(arr);

    return 0;
}

