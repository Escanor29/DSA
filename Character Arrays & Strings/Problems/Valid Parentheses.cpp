// https://leetcode.com/problems/valid-parentheses/

#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    if(s=="")   return true;
    string a="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') a.push_back(s[i]);
        else if(s[i]==')' && a.back()=='(') a.pop_back();
        else if(s[i]=='}' && a.back()=='{') a.pop_back();
        else if(s[i]==']' && a.back()=='[') a.pop_back();
        else return false;         // s=")}"                          
    }
    if(a.empty())  return true;
    else return false;
}

int main (){
    string s = "()[]{";
    if(isValid(s)) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    return 0;
}