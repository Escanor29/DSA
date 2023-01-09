#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }

        //destructor
        ~Node(){
            int value = this->data;
            //memory free
            if(this->next != NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"memory is free for node with data "<<value<<endl;
        }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

//insert at head
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
    }else{
        temp->next=head;
        head->prev=temp;
        head=temp; 
    }
    
}

//insert at tail
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    if(tail==NULL){
        head=temp;
        tail=temp;
    }else{
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    }
}

//insert at any position
void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    //insert at head
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }

    int cnt=1;
    Node* temp=head; 
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at tail
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }
        
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;   
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
}

//delete node
void deleteNode(Node* head,Node* tail,int position){
    //deleting first node
    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
    //deleting any middle or last node
        Node* curr=head;
        Node* prvs=NULL;

        int cnt=1;
        while(cnt!=position){
            prvs=curr;
            curr=curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            prvs->next=NULL;
            tail=prvs;
            curr->prev=NULL;
            delete curr;
        }

        prvs->next=curr->next;
        curr->next->prev=prvs;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;

    }

}

int main(){

    Node* head=NULL;
    Node* tail=NULL;

    Node* node1 = new Node(10);

    insertAtHead(head,tail,11);
    insertAtTail(head,tail,12);
    insertAtPosition(head,tail,3,15);

    print(head);

    cout<<getLength(head)<<endl;

    deleteNode(head,tail,1);
    print(head);

    return 0;
}