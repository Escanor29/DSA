#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.push_front(2);

    cout<<"Print 1st Index element : "<<d.at(1)<<endl;

    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;

    cout<<"empty or not : "<<d.empty()<<endl;

    cout<<"before erase, size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase, size : "<<d.size()<<endl;
    
    // The deque::max_size() is a built-in function in C++ STL which returns the maximum number of elements that a deque container can hold.
    cout<<"max size : "<<d.max_size()<<endl;

    return 0;
}