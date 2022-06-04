#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"Finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;

    cout<<"lower bound of 3: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound of 5: "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"rotate left by 1 : "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"sort : "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    int a=7,b=9;
    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a = "<<a<<endl;

    string x = "12345";
    reverse(x.begin(),x.end());
    cout<<x<<endl;
    

    return 0;
}