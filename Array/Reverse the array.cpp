// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rev(vector<int> &v,int m){

    //1st approach
    int s=m+1,e=v.size()-1;
    while (s<=e)
        swap(v[s++],v[e--]);
    

    // 2nd approach
    // reverse(v.begin()+m+1,v.end());

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        rev(v,m);

        for(auto i : v){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    return 0;
}