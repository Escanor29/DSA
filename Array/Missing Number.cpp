/*
https://leetcode.com/problems/missing-number/description/
Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

// // Optimal Approach 1 -> sum till n = n(n+1)/2
//       int n=nums.size();
//         int sum=0,total=n*(n+1)/2;
//         for(int i=0;i<n;i++)
//             sum+=nums[i];

//         return total-sum;


// Optimal Approach 2 -> a^a=0 & a^0=a
        int n=nums.size();
        int missed=0;
        for(int i=0;i<n;i++){
            missed=missed^i^nums[i];
        }
        missed^=n;
        return missed;
    }
};

int main(){
    vector<int> nums = {0, 1, 3};
    Solution sol;
    
    int missing = sol.missingNumber(nums);
    
    cout << "The missing number is: " << missing << std::endl;

    return 0;
}