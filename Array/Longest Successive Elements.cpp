#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    
    int len=1,mx=1;
    sort(a.begin(),a.end());

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<" ";
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])==1){
            len++;
            mx=max(mx,len);
        }
        else if(abs(a[i]-a[i+1])>1)
            len=1;
        // cout<<" "<<len;
    }
    // cout<<endl;
    return mx;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        v.push_back(element);
    }

    int result = longestSuccessiveElements(v);
    cout<<result;

    return 0;
}