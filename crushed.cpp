#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    

};
Node *ti(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *n=new Node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=tail->next;
        }

        cin>>data;

    }
    return head;
}
void print(Node *head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *midPoint(Node *head)
{
    Node*temp=head;
    Node*fast=head;
    Node*slow=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    if(count%2==0){
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    
    else(count%2!=0);{
        
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    return slow;
    
}

Node* insertNode(Node *head, int i, int data)
{
    Node *newNode=new Node(data);
    int count=0;
    Node *temp=head;
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(i==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    if(temp!=NULL)
    {
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}

int main()
{
    Node *head=ti();
    print(head);
    int data, i;
    cin>>i>>data;
    head=insertNode(head,i, data);
    print(head);
}
