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
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *takeInput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;

        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;

    }
    return head;

}

int main()
{
    Node *head = takeInput();
    print(head);
    
}