// https://leetcode.com/problems/two-sum/description/
// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

// // Brute Force
//         vector<int> ans;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if((nums[i]+nums[j])==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
//         return ans;

// // Better Approach(using Hashing)
//         vector<int> ans;
//         int n=nums.size();
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             if(mp.find(target-nums[i])!=mp.end()){
//                 ans.push_back(mp[target-nums[i]]);
//                 ans.push_back(i);
//                 break;
//             }
//             mp.insert({nums[i],i});
//         }
//         return ans;

// Optimized Approach(using two-pointer)
    // Create a vector of pairs to store elements along with their indices
        vector<int> ans;
        int n=nums.size();
        vector<pair<int, int>> elements;
        for (int i = 0; i < n; i++)
            elements.push_back({nums[i], i});
        
        sort(elements.begin(),elements.end());

        int left=0,right=n-1;
        while(left<right){
            if((elements[left].first+elements[right].first)==target){
                ans.push_back(elements[left].second);
                ans.push_back(elements[right].second);
                break;
            }
            else if((elements[left].first+elements[right].first)<target)
                left++;
            else
                right--;
        }
        return ans;
    }
};

int main(){
    vector<int> nums;
    int n,target;
    // cout<<"nums size :";
    cin>>n;
    // cout<<"\nnums : ";
    while(n--){
        int element;
        cin>>element;
        nums.push_back(element);
    }
    // cout<<"\nTarget : ";
    cin>>target;
    // cout<<endl;
    Solution soln;
    vector<int> result =  soln.twoSum(nums,target);
    for(int num:result)
        cout<<num<<" ";

    return 0;
}