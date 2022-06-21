// https://leetcode.com/problems/rotate-array/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> v(nums.size());
    for(int i=0;i<nums.size();i++){
        v[(i+k)%nums.size()]=nums[i];
    }
    nums=v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v ;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        rotate(v,k);

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }cout<<endl;

    }

    return 0;
}