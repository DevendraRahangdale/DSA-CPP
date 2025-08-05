#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Function to merge two sorted linked lists
Node *merge(Node*&head1 ,Node *&head2){
    Node *dummy=new Node(-1);
    Node *tail=dummy;

    while( head1 !=NULL && head2 !=NULL){
        if(head1->data <= head2->data){
tail->next=head1;
head1=head1->next;
        }
        else{
            tail->next=head2;
            head2=head2->next;
        }
        tail=tail->next;
    }

    if(head1) tail->next=head1;
    if(head2) tail->next=head2;

    return dummy->next;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Function to insert at the tail
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Example usage
int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);

    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    Node* merged = merge(head1, head2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
