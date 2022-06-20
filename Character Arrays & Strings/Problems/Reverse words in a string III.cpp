// https://leetcode.com/problems/reverse-words-in-a-string-iii/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
        int l=0,r=0;
        string ans="";
        while(l<s.size()){
            while(r<s.size() && s[r] != ' ')   
                r++;

            reverse(s.begin()+l,s.begin()+r);

            l=r+1;
            r=l;
        }
        
        return s;
    }

int main(){
    string s="My name is Obito";
    reverseWords(s);
    cout<<reverseWords(s)<<endl;

    return 0;
}