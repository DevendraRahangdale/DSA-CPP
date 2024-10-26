#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize the node with data and nullptr
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a node at the end of the linked list
void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    
    if (!head) {
        // If the list is empty, the new node becomes the head
        head = newNode;
    } else {
        // Traverse to the end of the list and insert the new node
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to add two linked lists
Node* addLists(Node* list1, Node* list2) {
    Node* result = nullptr;
    Node* current = nullptr;
    int carry = 0;
    
    while (list1 || list2 || carry) {
        int sum = (list1 ? list1->data : 0) + (list2 ? list2->data : 0) + carry;
        carry = sum / 10;
        
        Node* newNode = new Node(sum % 10);
        
        if (!result) {
            // If result is empty, the new node becomes the head
            result = newNode;
            current = result;
        } else {
            // Insert the new node at the end of the result list
            current->next = newNode;
            current = current->next;
        }
        
        // Move to the next nodes in the input lists (if any)
        if (list1) list1 = list1->next;
        if (list2) list2 = list2->next;
    }
    
    return result;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* list1 = nullptr;  // Head of the first linked list
    Node* list2 = nullptr;  // Head of the second linked list
    
    int n;  // Number of elements in the linked lists
    
    // Input for the first linked list
    std::cout << "Enter the number of elements for the first linked list: ";
    std::cin >> n;
    std::cout << "Enter elements for the first linked list: ";
    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        insertNode(list1, value);
    }
    
    // Input for the second linked list
    std::cout << "Enter the number of elements for the second linked list: ";
    std::cin >> n;
    std::cout << "Enter elements for the second linked list: ";
    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        insertNode(list2, value);
    }
    
    // Display the two linked lists
    std::cout << "First Linked List: ";
    displayList(list1);
    
    std::cout << "Second Linked List: ";
    displayList(list2);
    
    // Add the two linked lists
    Node* sumList = addLists(list1, list2);
    
    // Display the result
    std::cout << "Sum of Linked Lists: ";
    displayList(sumList);
    
    return 0;
}
