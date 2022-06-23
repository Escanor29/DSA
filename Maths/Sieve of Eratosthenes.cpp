#include <iostream>
#include <vector>
using namespace std;

vector<int> primeSieve(int n) {
    vector<int> v;
    int prime[n+1]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            v.push_back(i);
        }
    }

    return v;
}

int main(){

    int n;
    cin>>n;

    vector<int> v = primeSieve(n);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}