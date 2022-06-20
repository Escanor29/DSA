// https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=0

#include <iostream>
#include <string>
using namespace std;

// TC->O(n)  SC->O(n)
string replaceSpaces(string &str){
	string ans = "";
    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
            ans+="@40";
        else
            ans+=str[i];
    }
    return ans;
}

int main(){
    string s="My name is Obito";
    cout<<replaceSpaces(s)<<endl;

    return 0;
}