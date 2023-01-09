#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }

    //destructor
        ~Node(){
            int value=data;
            if(this->next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"memory is free for node with data "<<value<<endl;
        }

};

//insert node
void insertNode(Node* &tail,int element,int data){
    Node* temp=new Node(data);
    //case 1: empty list
    if(tail==NULL){
        tail=temp;
        tail->next=tail;
    }
    //non-empty list
    //assuming that the element is present in the list
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found -> curr is representing element node
        temp->next=curr->next;
        curr->next=temp;
    }
        
}

//delete node
void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty , check it again"<<endl;
        return;
    }
    //non-empty list
    //assuming that "value is present in the CLL"
    else{
       Node* prev=tail;
       Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        // 1 node in  CLL
        if(curr==prev){
            tail=NULL;
        }

        // >=2 nodes in  CLL
        else if(tail==curr){
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}

// print nodes
void print(Node* tail){
    Node* temp=tail;

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);

    cout<<endl;
}

bool isCircularList(Node* head){
    //empty list
    if(head==NULL)
        return true;

    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    } 

    return (temp==head)? true:false;
}

bool detectLoop(Node* head){
    //empty list
    if(head==NULL)
        return false;

    map<Node*,bool> visited;

    Node* temp=head;
    while(temp!=NULL){
        if(visted[temp]==true)
            return true;
        
        visited[temp]=true;
        temp=temp->next;
    }

    return false;
}

int main(){
    Node* tail=NULL;

    insertNode(tail,5,3);
    insertNode(tail,3,1);
    // insertNode(tail,3,4);
    // insertNode(tail,4,7);
    // insertNode(tail,4,2);

    deleteNode(tail,3);

    print(tail);

    return 0;
}