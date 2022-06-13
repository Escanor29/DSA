#include <iostream>
using namespace std;

int binary_search(int n,int a[],int key){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(a[mid]==key) return mid;
        else if(a[mid]<key) start=mid+1;
        else end=mid-1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    cout<<binary_search(n,a,k)<<endl;

    return 0;
}