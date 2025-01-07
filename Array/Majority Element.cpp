// Majority Element (>n/2 times)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element=0,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                element=nums[i];
                cnt=1;
            }else if(nums[i]==element){
                cnt++;
            }else{
                cnt--;
            }
        }

        cnt=0;
        for(int i=0;i<n;i++){
            if(element==nums[i])
                cnt++;
        }

        if(cnt>n/2)
            return element;

        return -1;    
    }
};

int main(){
    vector<int> nums;
    int n;
    // cout<<"nums size :";
    cin>>n;
    // cout<<"\nnums : ";
    while(n--){
        int element;
        cin>>element;
        nums.push_back(element);
    }
    // cout<<"\nTarget : "<<endl;
    Solution soln;
    int result =  soln.majorityElement(nums);
    cout<<result<<" ";

    return 0;
}