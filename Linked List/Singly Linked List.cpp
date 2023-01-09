#include <iostream>
#include <map>
using namespace std;

class Node {
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
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail=tail->next; 
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int data){
    Node* nodeToInsert = new Node(data);

    //insert at start
    if(position==1){
        InsertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at last position
    if(temp->next==NULL){
        InsertAtTail(tail,data);
        return;
    }

    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}

void deletAtPosition(Node* &head,Node* &tail,int position){
    //delete first node
    if(position==1){
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
    //delete node at any position or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        if(curr==tail){            //handling tail when delete last node
            tail=prev;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr; 

    }
}

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool detectLoop(Node* head){
    //empty list
    if(head==NULL)
        return false;

    map<Node*,bool> visited;

    Node* temp=head;
    while(temp!=NULL){
        if(visted[temp]==true){
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }
        
        visited[temp]=true;
        temp=temp->next;
    }

    return false;
}

Node*  floydDetectLoop(Node* head){
    if(head==NULL)
        return NULL;

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;

        slow=slow->next;

        if(slow==fast)
            return slow;
    }

    return NULL;
}

Node* getStartingNodeOfLoop(Node* head){
    if(head==NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    if(intersection==NULL)
        return NULL;
    Node* slow=head;

    while(intersection!=slow){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}

Node* removeLoop(Node* head){
    if(head==NULL)
        return NULL;

    Node* startOfLoop=getStartingNodeOfLoop(head);
    if(startOfLoop==NULL)
        return head;
    Node* temp=startOfLoop;

    while(temp->next!=startOfLoop){
        temp=temp->next;
    }

    temp->next=NULL;
    return head;
}

int main(){

    Node* head=NULL;
    Node* tail=NULL;

    Node* node1=new Node(10);
    head=node1;
    tail=node1;
    // Node* node1 = new Node(10);
    // Node* node2 = new Node(20);
    // node2->next=node1;
    // head=node2;
    // cout<<node2->data<<" "<<node2->next<<endl;
    // cout<<node1->data<<" "<<node1->next<<endl;

    InsertAtHead(head,5);
    InsertAtHead(head,10);
    InsertAtTail(tail,50);
    InsertAtTail(tail,70);
    InsertAtPosition(head,tail,1,100);
    InsertAtPosition(head,tail,5,200);
    InsertAtTail(tail,35);
    InsertAtHead(head,27);

    deletAtPosition(head,tail,8);
    
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;


    return 0;
}