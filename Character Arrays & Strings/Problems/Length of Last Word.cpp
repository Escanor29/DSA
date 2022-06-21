// https://leetcode.com/problems/length-of-last-word/

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    if(s=="")   return 0;
    int i=s.size()-1;
    while(s[i]==' ')    i--;

    int ans=0;
        for(;i>=0;i--){
            ans++;
            if(s[i]==' ') break;
        }

    if(i==-1)    return ans;
    return ans-1;
}

int main(){
    string s = "luffy is still joyboy  ";
    cout<<lengthOfLastWord(s)<<endl;

    return 0;
}