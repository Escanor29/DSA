#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s;
    s.insert(5);       //O(log(n))
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    it++;

    s.erase(it);    //O(log(n))

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;    

    cout<<"6 is present or not : "<<s.count(6)<<endl;       //O(log(n))

    set<int>::iterator itr = s.find(1);     //O(log(n))

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;



    return 0;
}