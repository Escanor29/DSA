#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,string> m;

    m[1]="Harry";
    m[12]="Kaido";
    m[5]="Kid";

    m.insert({6,"Asura"});      //O(log(n))
    
    cout<<"before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"12 is present or not : "<<m.count(12)<<endl;       //O(log(n))

    m.erase(5);
    cout<<"after erase : "<<endl;       //O(log(n))
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(6);
    cout<<"From key 6 : "<<endl;
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }



return 0;
}