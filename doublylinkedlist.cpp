#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*prev;
    node *next;

    node(){
        this->prev=NULL;
        this->next=NULL;

    }
    node (int data){
        this->data=data;
         this->prev=NULL;
        this->next=NULL;

    }

    ~node(){
    cout<<"distructor is called for:"<<this->data<<endl;
}

};


void printll(node *&head){
    node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int getlength(node *&head){
    node*temp=head;
    int len=0;
    while(temp !=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


void insertAthead(node *&head, node *&tail ,int data){
      // empty linked list
    if(head==NULL){
        // STEP 1:CREATE NEW NODE
        node *newnode=new node(data);

        // step 2; update head
        head=newnode;
        tail=newnode;
}
else {
    
    node *newnode= new node(data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

}
}



void insertATtail(node*&head,node*&tail,int  data){

      // empty linked list
    if(head==NULL){
        // STEP 1:CREATE NEW NODE
        node *newnode=new node(data);

        // step 2; update head
        head=newnode;
        tail=newnode;
    }
    else{
        // create newnode
    node* temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    
    }
    
}
void insertatposition(node*&head,node*&tail,int data,int position){
    if(position<1){
        cout<<"cannot insert"<<endl;
        return ;
    }
    int length= getlength(head);


    if(position==1){
      insertAthead(head,tail,data);
    }
    else if(position>length){
        insertATtail(head,tail,data);
    }
    else{
        // insert at midddle position

        // step 1: create a new node
        node*temp=new node(data);
        // step travse kro 
        node*prevnode=NULL;
        node*curr=head;
        
        while(position !=1){
            prevnode=curr;
            curr=curr->next;
            position--;
        }
        // step 3: position 
        prevnode->next=temp;
        temp->prev=prevnode;
        temp->next=curr;

        curr->prev=temp;
        
            }



}
//**********************************************************************************************************************

void Deletion(node*&head,node*&tail,int position){
    int length=getlength(head);
    // single element vala case
    if(head==tail){
        node*temp=head;
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

        node*temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }

    else if(position==length){
        // delete at last node ko
        node*prev=head;
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

        node*prev=NULL;
        node*curr=head;

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
//********************************************************************************************************



int main(){

    node *head=NULL;
    node *tail=NULL;

insertAthead(head,tail ,50);
insertAthead(head,tail ,40);
insertAthead(head,tail ,30);
insertAthead(head,tail ,20);
insertAthead(head,tail ,10);


//  printll(head);

 cout<<endl;
 insertATtail(head,tail,1000);
//   printll(head);

  cout<<endl;

  insertatposition(head,tail,500,3);
  printll(head);


// cout<<endl;
// cout<<"after deletion"<<endl;

// Deletion(head,tail,1);
//   printll(head);
// Deletion(head,tail,2);
//   printll(head);
// Deletion(head,tail,3);
//   printll(head);
// Deletion(head,tail,4);
//   printll(head);
// Deletion(head,tail,1);
//   printll(head);
// Deletion(head,tail,1);
//   printll(head);
// Deletion(head,tail,1);
//   printll(head);



// node*head=new node(10);

// cout<<endl;
// cout<<"length of linked list is:"<<getlength(head);
// cout<<endl;
// insertAthead()
}
