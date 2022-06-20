//https://leetcode.com/problems/reverse-words-in-a-string/ 

#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s) {
        int i = s.length()-1;
        string ans="";
        while(i>=0){
            while(i>=0 && s[i] == ' ')   i--;
            int j=i;
            
            if(i<0) break;
            
            while(i>=0 && s[i] != ' ')   i--;
            
            if(ans=="")
                ans.append(s.substr(i+1,j-i));
            else
                ans.append(" " + s.substr(i+1,j-i));
        }
        
        return ans;
    }

int main(){
    string s="My name is Obito";
    reverseWords(s);
    cout<<reverseWords(s)<<endl;

    return 0;
}