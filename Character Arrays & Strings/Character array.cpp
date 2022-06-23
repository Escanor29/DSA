#include <iostream>
#include <string.h>
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

void charArrayToLowerCase(char s[],int n){
        for (int i = 0; i < n; i++)
            s[i] = tolower(s[i]);
}

void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
 
    // Traverse the given string. If current character is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is incremented
                                   
    str[count] = '\0';
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

    // convert character array to lower case 
    char s[10];
    cin>>s;
    int x = getLength(s);
    charArrayToLowerCase(s,x);
    cout<<s<<endl;

    // remove spaces
    char a[]= "I tac  hi";
    removeSpaces(a);
    cout<<a<<endl;

    return 0;       
}