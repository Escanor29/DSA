/*
https://leetcode.com/problems/3sum/description/
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
// // Brute force
//         int n=nums.size();
//         set<vector<int>> s;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     vector<int> ans;
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int> temp = {nums[i],nums[j],nums[k]};
//                         sort(temp.begin(),temp.end());
//                         s.insert(temp);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> ans(s.begin(),s.end());
//         return ans;

// // Better
//         int n=nums.size();
//         set<vector<int>> s;
//         for(int i=0;i<n;i++){
//             set<int> hashset;
//             for(int j=i+1;j<n;j++){
//                 int lastvalue = -(nums[i]+nums[j]);
//                 if(hashset.find(lastvalue)!=hashset.end()){
//                     vector<int> temp = {nums[i],nums[j],lastvalue};
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);
//                 }
//                 hashset.insert(nums[j]);
//             }
//         }
//         vector<vector<int>> ans(s.begin(),s.end());
//         return ans;

        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) 
                continue;
            
            int j=i+1, k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--; 
                }
            }
        }
        return ans;

    }
};

int main(){
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = solution.threeSum(nums);

    for (const auto& triplet : result) {
        std::cout << "[";
        for (int i = 0; i < triplet.size(); ++i) {
            std::cout << triplet[i];
            if (i < triplet.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}