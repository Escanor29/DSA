// 

#include <iostream>
#include <string.h>
using namespace std;

string removeDuplicates(string s) {
    string c="";
    for(int i=0;i<s.length();i++){
        if(c.length()>0 && c.back()==s[i])
            c.pop_back();
        else
             c.push_back(s[i]);
    }
    return c;
}


int main(){
    string s,part;
    s= "ayyxxxxyyyb";
    part = "xy";
    s=removeDuplicates(s);
    cout<<s<<endl;

    return 0;
}