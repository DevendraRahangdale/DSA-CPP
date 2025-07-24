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


Node *middleoflinkedlist(Node *&head){

    if(head==NULL) return NULL;
    Node *slow=head->next;
    Node *fast=head->next->next;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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

   Node* middle = middleoflinkedlist(head);
if (middle != NULL) {
    cout << "Middle element is: " << middle->data << endl;
} else {
    cout << "The list is empty." << endl;
}

    return 0;
}
