#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node*head){
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


Node *takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
        /*    Node*temp=head;
            while(temp->next!=NULL){ // AN ALTERNATE METHOD
            temp=temp->next;
        }*/
        tail->next=newNode;
        tail=tail->next;

        }
        
        cin>>data;

    }
    return head;

}


void insertNodde(Node*head, int i, int data){
    Node *newNode =new Node(data);
    int count =0;
    Node*temp=head;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}


void deleteNode(Node*head, int i){
    int count=0;
    Node*temp=head;
    while(count<i-1){
        temp=temp->next;
        count++;

    }cout<<endl;
    temp->next=temp->next->next;
}


int main(){
    // Node n0(0);
    // Node n1=1;
    // Node n2=2;
    // Node n3=3;
    // Node*head=&n0;
    // n0.next=&n1;
    // n1.next=&n2;
    // n2.next=&n3;
    // cout<<n0.data<<" "<<n2.next;
    // Node *n4=new Node(4);
    // n3.next=n4;
    // Node *n5=new Node(5);
    // n4->next=n5;
    Node *head = takeInput();
    insertNodde(head, 4, 100);
    print(head);
    deleteNode(head, 4);
    print(head);
 
}
//always enter the boundary conditions to get all the test cases passed