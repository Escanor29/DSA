// https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <algorithm>

using namespace std;


char tolowerCase(char ch){
    if(ch>='a' && ch<='z' || ch>=0 && ch<=9)
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start=0;
    int end=s.size()-1;

    while(start<=end){
        if(isalnum(s[start])==0) 
            start++;
        else if(isalnum(s[end])==0) 
            end--;
        else if(tolowerCase(s[start])!=tolowerCase(s[end])){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    cout<<checkPalindrome(s)<<endl;

    return 0;
}