#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
Node*next;

Node() {
    cout<<"i am default constructor"<<endl;
    this->next=NULL;

}
Node(int data) {
    // cout<<"i am parametrised constructor"<<endl;
    this->data=data;
    this->next=NULL;
}


~Node(){
    cout<<"distructor is called for:"<<this->data<<endl;
}






};



void printLL(Node*head){
    Node*temp=head;
    int count=0;

    while(temp !=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    // cout<<"lenth of linked list:"<<count;
}
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAThead(Node*&head,Node*&tail,int  data){

      // empty linked list
    if(head==NULL){
        // STEP 1:CREATE NEW NODE
        Node *newnode=new Node(data);

        // step 2; update head
        head=newnode;
        tail=newnode;
    }
    else{
        // create newnode
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
    }
    
}
void insertATtail(Node*&head,Node*&tail,int  data){

      // empty linked list
    if(head==NULL){
        // STEP 1:CREATE NEW NODE
        Node *newnode=new Node(data);

        // step 2; update head
        head=newnode;
        tail=newnode;
    }
    else{
        // create newnode
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
    temp->next=NULL;
    }
    
}

void createtail(Node*&head,Node*&tail){
    Node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    tail=temp;
}

void insertatposition(Node*&head,Node*&tail,int data,int position){
    if(position<1){
        cout<<"cannot insert"<<endl;
        return ;
    }
    int length=getLength(head);


    if(position==1){
        insertAThead(head,tail,data);
    }
    else if(position>length){
        insertATtail(head,tail,data);
    }
    else{
        // insert at midddle position

        // step 1: create a new node
        Node*temp=new Node(data);
        // step travse kro 
        Node*prev=NULL;
        Node*curr=head;
        
        while(position !=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        // step 3: position 
        prev->next=temp;
        temp->next=curr;
        
            }



}


//************************************************************************************************************

void Deletion(Node*&head,Node*&tail,int position){
    int length=getLength(head);
    // single element vala case
    if(head==tail){
        Node*temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }

    // linkrd list empty
    if(head==NULL){
        cout<<"cannot delete bcouse linked list ie empty"<<endl;
        return;
    }
    // delete from head
    if(position==1){
        // first node ko delete krna hain

        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else if(position==length){
        // delete at last node ko
        Node*prev=head;
        while(prev->next !=tail){
prev=prev->next;
        }
        // prev ka link ko null kr do
        prev->next=NULL;

        delete tail;
        tail=prev;
    }
    else{
        // delete at  middle element

        Node*prev=NULL;
        Node*curr=head;

        while(position !=1){
            prev=curr;
            curr=curr->next;
            position--;
                   }
                   prev->next=curr->next;
                   curr->next=NULL;
                   delete curr;

    }

}
//*************************************************************************************************************************
Node* getstartingpointofloop(Node*&head){
    // check foor loop

    Node*slow=head;
    Node*fast=head;

    while(fast !=NULL && fast->next != NULL ){
        fast=fast->next->next;
        slow=slow->next;
        if(fast== slow){
            break;
        }
    }
    // yha pahochna matlab loop present hai
    slow=head;

    while(fast != slow){
        slow=slow->next;
        fast=fast->next;
        
    }
    return slow;
}

//********************************************************************************************************

void removeloop(Node*&head){
    Node*slow=head;
    Node*fast=head;

    while(fast !=NULL && fast->next != NULL ){
        fast=fast->next->next;
        slow=slow->next;
        if(fast== slow){
            break;
        }
    }
    // yha pahochna matlab loop present hai
    slow=head;

    while(fast != slow){
        slow=slow->next;
        fast=fast->next;
        
    }
  Node*startpoint= slow;

Node*temp=fast;
while(fast != startpoint ){
    temp=temp->next;

}
temp->next= NULL;
} 
Node* reverse(Node*&head){
    Node*prev=NULL;
    Node*curr=head;

    while(curr !=NULL){
        Node*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
        head=prev;
    }
    return prev;
}


void addone(Node*&head){
    // reverse

head=reverse(head);

    //add +1

int carry=1;
Node*temp=head;
while(temp->next !=NULL){
    int totalsum=temp->data+carry;
    int digit=totalsum %10;
    carry=totalsum/10;

    temp->data=digit;
    temp=temp->next;
    if(carry==0){
        break;
    }
}
// process on last node
if(carry !=0){
     int totalsum=temp->data+carry;
    int digit=totalsum %10;
    carry=totalsum/10;

    temp->data=digit;
    if(carry !=0){
        Node*newnode=new Node(carry);
        temp->next=newnode;
    }

}

    // revesre
    head=reverse(head);
}











int main(){

Node*head=NULL;
Node*tail=NULL;

insertATtail(head,tail,9);
insertATtail(head,tail,9);
insertATtail(head,tail,9);

// insertATtail(head,tail,50);
// printLL(head);
// insertatposition(head,tail,1000,51);
// printLL(head);

addone(head);
printLL(head);
// tail->next=head->next;

// cout<<"after deletion:"<<endl;;
// Deletion(head,tail,3);
// printLL(head);

// cout<<"strarting pont of loop is:"<<getstartingpointofloop(head)->data<<endl;


// removeloop(head);
// printLL(head);













// creation of node
// Node a;

// Node*head=  new Node();
// Node*first=new Node(10);
// Node*second=new Node(20);
// Node*third=new Node(30);
// Node*fourth=new Node(40);
// Node*fifth=new Node(50);

// first->next=second;
// second->next=third;
// third->next=fourth;
// fourth->next=fifth;
// // linked list creation ho chuki hai

// Node*head=first;
// Node*tail=fifth;
// cout<<"printing the entire linked list"<<endl;
// printLL(head);
// insertAThead(head,tail,5);
// cout<<"insertion at head linked list:"<<endl;
// printLL(head);


// insertATtail(head,tail,600);
// cout<<"insertion at tail linked list:"<<endl;
// printLL(head);
}
