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

// Check for loop
Node* Looppresent(Node*& head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Loop is present" << endl;
            return slow;
        }
    }

    cout << "Loop not present" << endl;
    return NULL;
}

// Print the linked list
void printlist(Node*& head) {
    cout << "Linked list: ";
    Node* temp = head;
    int count = 0; // Safety to avoid infinite loop
    while (temp != NULL && count < 50) {
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
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

    // Comment this if testing a normal list
    // ---- CREATING LOOP FOR TESTING ----
    if (head != NULL && head->next != NULL) {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = head->next; // Creates a loop (last node points to 2nd node)
    }

    // Avoid printlist if loop exists — could run infinitely
    // printlist(head);

    Looppresent(head);

    return 0;
}
