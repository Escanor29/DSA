#include <iostream>
using namespace std;

int main(){

    // intro
    int num = 4;

    cout<<num<<endl;

    // address of Operator - &
    cout<<"adddress of num is "<<&num<<endl;

    int *ptr = &num;

    cout<<"value of num is "<< *ptr <<endl;

    cout<<"adddress of num is "<<ptr<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;

    // // pointer to int is created, and pointing to some garbage address
    // int *p;
    // cout<<*p<<endl;    


    // same initialization 
    int i=10;
    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q <<endl;

    // changes by pointer
    cout<<"before "<<*p<<endl;
    (*p)++;
    cout<<"after "<<*p<<endl;

    // copying a pointer
    int *p2=p;
    cout<<p<<" "<<p2<<endl;
    cout<<*p<<" "<<*p2<<endl;

    // important concepts
    cout<<*p++<<endl;
    cout<<p<<" "<<p+1<<endl;





    return 0;
}