#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

};

// Insert node at the tail
void insertAttail(Node*& head, int val) {
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}


Node *withoutlastoccurancekey(Node *&head,int key){
    Node *last=NULL;
    Node *lastprev=NULL;
    Node *prev=NULL;
    Node*temp=head;

    while(temp !=NULL){
        if(temp->data ==key){
           lastprev=prev;
           last=temp;
        }
        prev=temp;
        temp=temp->next;

    }
    if(last !=NULL){
        // if last occurence is not the head
        if(lastprev !=NULL){
            lastprev->next=last->next;
        }
        else{
            head=head->next;
        }
        delete head;
    }
    return head;
}










// Print the linked list
void printlist(Node*& head) {
    cout << "Linked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int n, val;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        insertAttail(head, val);
    }

    printlist(head);

    int key;
    cout<<"enter position you want to find node:";
    cin>>key;

    withoutlastoccurancekey(head,key);

    printlist(head);


    

    
}

