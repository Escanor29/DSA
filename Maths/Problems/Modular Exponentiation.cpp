// https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146

#include <iostream>

using namespace std;

int modularExponentiation(int x, int n, int m) {
    int ans=1;
    while(n>0){
        if(n&1){                    //odd
            ans= ( 1LL *(ans)%m*(x)%m)%m;
        }
        x=( 1LL *(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;

        cout<<modularExponentiation(x,n,m)<<endl;

    }

    return 0;
}