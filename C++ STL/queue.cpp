#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Rohan");
    q.push("Sameer");
    q.push("Luffy");

    cout<<"First element->"<<q.front()<<endl;
    cout<<"Size before pop ->"<<q.size()<<endl;

    q.pop();
    cout<<"First element->"<<q.front()<<endl;
    cout<<"Size after pop ->"<<q.size()<<endl;

    cout<<"is empty or not ->"<<q.empty()<<endl;

return 0;
}