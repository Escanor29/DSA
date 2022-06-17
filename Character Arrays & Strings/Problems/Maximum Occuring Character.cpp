// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int c[26]={0};

        for(int i=0;i<s.size();i++){
            int no=0;
            char ch = s[i];
            if(ch>='a' && ch<='z')
                no = ch - 'a'; 
            else
                no = ch - 'A';

            c[no]++;
        }

        int mx=-1,ans=0;
        for(int i=0;i<26;i++){
            if(c[i]>mx){
                ans=i;
                mx=c[i];
            }
        }    
        
        char finalAns='a'+ans;
        return finalAns;
    }

};

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}