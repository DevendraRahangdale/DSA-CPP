#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtTail(Node*&head,int val){
Node *newnode=new Node();
    Node *temp=head;
newnode->data=val;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
    return ;
}

while(temp->next !=NULL){
    temp=temp->next;
}
temp->next=newnode;
  
}

Node*reverselist(Node*&head){
Node*prev=NULL;
Node *curr=head;

while(curr!=NULL){
    Node *nextnode=curr->next;
curr->next=prev;
    prev=curr;
    curr=nextnode;
    
}
head=prev;
return head;
}









void printlist(Node *&head)
{
    cout << "linked list:";
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main()
{

    Node *head = NULL;
    int n,val;

    cout << "no of nodes in linked list:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter value of node" << i + 1<<":";
        cin>>val;
        insertAtTail(head,val);
    }

    printlist(head);

cout<<endl;

    reverselist(head);
    printlist(head);

}