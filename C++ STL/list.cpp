#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.push_front(3);


    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());         //Time Complexity for begin, end and empty is O(1) , but for erase is O(n). 
    cout<<"after erase,"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"size : "<<l.size()<<endl;

    //copy the list l
    list<int> n(l);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
 
    list<int> m(5,100);
    cout<<"Printing m"<<endl;
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}