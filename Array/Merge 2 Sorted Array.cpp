#include <iostream>
#include <vector>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    for(int i:a)
        cout<<a[i-1]<<" ";
    cout<<endl;
    for(int j:b)
        cout<<b[j-1]<<" ";
    cout<<endl;

    vector<int> ans;
    int n=a.size(),m=b.size(),i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i])
                ans.push_back(a[i]);
            i++;
        }else{
            if(ans.size()==0 || ans.back()!=b[i])
                ans.push_back(b[j]);
            j++;
        }
    }

    while(i<n){
        if(ans.back()!=a[i])
            ans.push_back(a[i]);
        i++;
    }

    while(j<m){
        if(ans.back()!=b[i])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}


int main(){

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    // a.push_back(6);

    vector<int> b;
    b.push_back(2);
    b.push_back(2);
    b.push_back(4);

    vector<int> ans = sortedArray(a,b);

    // for(auto i:ans)
    //     cout<<i<<" "<<ans[i-1]<<" "<<endl;

    return 0;
}
