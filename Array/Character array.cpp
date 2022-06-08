#include <iostream>
using namespace std;

int getLength(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    
    return i; 
}

void reverseString(char s[] ,int n) {
    for(int i=0;i<n/2;i++) 
        swap(s[i],s[n-1-i]);
}

int main(){
    char name[20];

    cin>>name;      //Edward Newgate

    //cin stops execution whenever there is space , tab or newline. 

    cout<<name<<endl;       //Edward

    name[3]='\0';
    cout<<name<<endl;       //Edw

    int n = getLength(name);
    cout<<n<<endl;

    reverseString(name,n);
    cout<<name<<endl;

    return 0;       
}