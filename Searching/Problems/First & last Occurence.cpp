// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-gisorted-array_1082549
#include <iostream>
#include <vector>
using namespace std;


int first(vector<int>& a, int n, int key){
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

int last(vector<int>& a, int n, int key){
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

pair<int, int> firstAndLastPosition(vector<int>& a, int n, int k)
{
    pair<int,int> p;
    p.first=first(a,n,k);
    p.second=last(a,n,k);
    cout<<p.first<<" "<<p.second<<endl;
}

int main(){
    vector<int> v={1,2,3,3,3,3,4,4,4,5,5};
    firstAndLastPosition(v,11,3);

    return 0;
}