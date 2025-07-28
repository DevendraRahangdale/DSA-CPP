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


// find the kth node from the last of linked list

int findkthNode(Node*&head,int k){
    Node *temp=head;
    int len=0,i;

    while(temp != NULL){
        temp=temp->next;
        len++;
        
    }

if(k>len){
    return -1;
}
temp=head;

for(int i=1;i<len-k+1;i++) {
temp=temp->next;
}
    return temp->data;
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
    cout<<"enter position you want to find node:";
    cin>>k;


    cout <<"ans of this question:" <<findkthNode(head, k);

    
}