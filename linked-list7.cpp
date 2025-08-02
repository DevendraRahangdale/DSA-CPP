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
Node* listwithoutmiddle(Node *&head){

    if(head->next==NULL){
        return NULL;
    }

    Node *curr=head;
    Node *temp=head;
int count=0;
    while(temp !=NULL){
        count++;
        temp=temp->next;
    }

    int middle=count/2;
    for(int i=0;i<middle-1;i++){
        curr=curr->next;
    }
curr->next=curr->next->next;

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

   cout<<"linked list with delete middle:"<<endl;

   listwithoutmiddle(head);
    printlist(head);

    return 0;
}
