/* 
    https://www.codingninjas.com/studio/problems/superior-elements_6783446
    Given an array, print all the elements which are leaders. 
    A Leader is an element that is greater than all of the elements on its right side in the array.
    Input:  arr = [4, 7, 1, 0]
    Output: 7 1 0
*/ 

#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int n=a.size();

// Brute Force Approach
    // for(int i=0;i<n;i++){
    //     bool leader=true;
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]<=a[j]){
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader)
    //         ans.push_back(a[i]);
    // }
    // // sort(ans.begin(),ans.end());
    // // reverse(ans.begin(),ans.end());
    
    
// Optimal Approach
    int mx=a[n-1];
    ans.push_back(a[n-1]);

    for(int i=n-2;i>=0;i--){
        if(a[i]>mx){
            ans.push_back(a[i]);
            mx=a[i];
        }
    }
    
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v,ans;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    ans=superiorElements(v);

    for(auto i:ans)
        cout<<i<<" ";

    return 0;
}