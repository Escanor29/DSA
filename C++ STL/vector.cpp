#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    cout<<"Element at 2nd index : "<<v.at(2)<<endl;
    cout<<"Front Element : "<<v.front()<<endl;
    cout<<"Back Element : "<<v.back()<<endl;


    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear, size "<<v.size()<<endl;
    cout<<"before clear, capacity "<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear, size "<<v.size()<<endl;
    cout<<"after clear, capacity "<<v.capacity()<<endl;
    
    vector<int> a(5,1);
    cout<<"Print a "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> x(a);
    cout<<"Print x "<<endl;
    for(int i:x){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}
