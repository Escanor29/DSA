/*
https://leetcode.com/problems/missing-number/description/
Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,mx=0;
        for(auto x:nums){
            (x==0) ? cnt=0 : cnt++;
            mx=max(cnt,mx);
        }
        return mx;
    }
};

int main(){
    vector<int> nums = {0,0,0,0,1,1};
    Solution sol;
    
    int missing = sol.findMaxConsecutiveOnes(nums);
    
    cout << "The maximum consecutive ones : " << missing << std::endl;

    return 0;
}