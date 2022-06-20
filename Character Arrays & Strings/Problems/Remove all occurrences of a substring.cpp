// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <iostream>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part) {
    while(s.length()!=0 && s.find(part)<s.length())
        s.erase(s.find(part),part.length());
    
    return s;
}

int main(){
    string s,part;
    s= "axxxxyyyyb";
    part = "xy";
    s=removeOccurrences(s,part);
    cout<<s<<endl;

    return 0;
}