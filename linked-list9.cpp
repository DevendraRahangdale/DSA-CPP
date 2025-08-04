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

Node*solve(Node *&head,int n,int m){
    Node *curr=head;
    Node *temp;
    if(m==0 || head==NULL){
        return NULL;

    }

    while(curr){
        for(int i=1;i<m && curr !=NULL;i++){
            curr=curr->next;
        }
        if(curr==NULL) break;
// delete node
temp=curr->next;
for(int i=0;i<n && temp !=NULL;i++){
    Node *todelete=temp;
    temp=temp->next;
    delete todelete;

}
curr->next=temp;
curr=temp;

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
    
    int a, val;

    cout << "Enter the number of nodes: ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        insertAttail(head, val);
    }

    printlist(head);
    int n,m;
    cout<<"enter node of n amd m:";
    cin>>n>>m;

   cout<<"linked list with delete m  node:"<<endl;

   solve(head,n,m);
   printlist(head);
   
    return 0;
}
