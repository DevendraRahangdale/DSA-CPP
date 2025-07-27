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


// rotated list
Node *rotatedlist(Node *&head,int k){
    if(k==0 || head==NULL){
        return head;
    }

    // rotate the list by k nodes

    for(int i=0;i<k;i++){
        Node *curr=head;
        while(curr->next !=NULL){
            curr=curr->next;
        }

        // move the first node to the last
        curr->next=head;
        curr=curr->next;
        head=head->next;
        curr->next=NULL;
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

    int k;
    cout<<"enter k for rotate:";
    cin>>k;

    rotatedlist(head,k);

    printlist(head);

   
    return 0;
}