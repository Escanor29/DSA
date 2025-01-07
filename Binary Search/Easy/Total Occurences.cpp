// Find total no. of Occurrence
#include <iostream>
using namespace std;

int first( int n,int a[], int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(a[mid]==key) {
            ans=mid;
            end=mid-1;
            }
        else if(a[mid]<key) start=mid+1;
        else end=mid-1;
    }
    return ans;
}

int last(int n,int a[], int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(a[mid]==key) {
            ans=mid;
            start=mid+1;
            }
        else if(a[mid]<key) start=mid+1;
        else end=mid-1;
    }
    return ans;
}


int main(){
    int a[10]={1,2,3,3,3,3,4,4,4,5};
    int ans = last(10,a,3)-first(10,a,3)+1;
    cout<<ans<<endl;

    return 0;
}