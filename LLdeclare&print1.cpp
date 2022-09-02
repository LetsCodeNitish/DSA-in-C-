#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void print(Node *head){
        while(head!=NULL){
        cout<<head -> data<<" ";
        head=head -> next;
        }
        }

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!= -1)
    {
        Node *newNode = new Node(data);
        if(head==NULL)
        {
            head=newNode;

        }
        else{
            Node *temp = head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    
return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    //statically
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    Node *head=&n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    Node *temp = head;
    
 while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp=temp -> next;
        }
   


    
    //dynamically

    Node *n3 = new Node(10);
    Node *n4 = new NOde(20);
    Node *head = n3;
    n3->next = n4;




}