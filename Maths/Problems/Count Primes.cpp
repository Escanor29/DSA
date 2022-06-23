// https://leetcode.com/problems/count-primes/

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    int count=0;
    vector<bool> a(n+1,1);

    a[0]=a[1]=0;

    for(int i=2;i<n;i++){
        if(a[i]==1){
            count++;
            for(int j=2*i;j<n;j+=i){
                a[j]=0;
            }
        }    
    }

    return count;
}

int main(){

    int n;
    cin>>n;
    
    cout<<countPrimes(n)<<endl;

    return 0;
}