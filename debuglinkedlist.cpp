// #include <iostream>

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// void printList(Node* &head) {
//     while (head != nullptr) {
//         std::cout << head->data <<"-> ";
//         head = head->next;
//     }
// }

// int main() {
//     Node* head = new Node();
//     Node* second =new Node();
//     Node* third = new Node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = nullptr;

//     printList(head);

//     return 0;
// }

//*******************************************************************************************************************

// 
// #include <iostream>

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// void deleteNode(Node* nodeToDelete) {
//     Node* temp = nodeToDelete->next;
//     nodeToDelete->data = temp->data;
//     nodeToDelete->next = temp->next;
//     delete temp;
// }

// void printList(Node* head) {
//     while (head != nullptr) {
//         std::cout << head->data << " ";
//         head = head->next;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* head = nullptr;

//     for (int i = 1; i <= 5; i++) {
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = head;
//         head = newNode;
//     }

//     // Deleting the node with data 3
//     Node* toDelete = head->next->next;
//     deleteNode(toDelete);

//     std::cout << "Linked List after deletion: ";
//     printList(head);

//     return 0;
// }
//****************************************************************************************************************

// #include <iostream>

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// bool hasCycle(Node* head) {
//     Node* slow = head;
//     Node* fast = head;

//     while (fast != nullptr && fast->next !=nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             return true;
//         }
//     }

//     return false;
// }

// int main() {
//     Node* head = nullptr;

//     for (int i = 1; i <= 5; i++) {
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = head;
//         head = newNode;
//     }

//     // Creating a cycle by linking the last node to the second node
//     Node* lastNode = head;
//     while (lastNode->next != nullptr) {
//         lastNode = lastNode->next;
//     }
//     lastNode->next=head->next;

//     if (hasCycle(head)) {
//         std::cout << "Linked List has a cycle." << std::endl;
//     } else {
//         std::cout << "Linked List does not have a cycle." << std::endl;
//     }

//     return 0;
// }//

//**********************************************************************************************************************

// #include <iostream>

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// Node* reverseList(Node* head) {
//     Node* prev = nullptr;
//     Node* current = head;
//     Node* nextNode = current->next;

//     while (current != nullptr) {
//         nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
//     }

//     head = prev;
//     return head;
// }

// void printList(Node* head) {
//     while (head != nullptr) {
//         std::cout << head->data << " ";
//         head = head->next;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* head = nullptr;

//     for (int i = 1; i <= 5; i++) {
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = head;
//         head = newNode;
//     }

//     std::cout << "Original Linked List: ";
//     printList(head);

//     head = reverseList(head);

//     std::cout << "Reversed Linked List: ";
//     printList(head);

//     return 0;
// }

//***************************************************************************************************************************



// #include <iostream>

// class Node {
//     public:
//     int data;
//     Node* next;
// };

// Node* mergeSortedLists(Node* list1, Node* list2) {
//     Node* mergedList = new Node;
//     Node* current = mergedList;

//     while (list1 != nullptr && list2 != nullptr) {
//         if (list1->data < list2->data) {
//             current->next = list1;
//             list1 = list1->next;
//         } else {
//             current->next = list2;
//             list2 = list2->next;
//         }
//         current = current->next;
//     }

//     if (list1 != nullptr) {
//         current->next = list1;
//     } else {
//         current->next = list2;
//     }

//     return mergedList->next;
// }

// void printList(Node*& head) {
//     while (head != nullptr) {
//         std::cout << head->data << " ";
//         head = head->next;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* list1 = nullptr;
//     Node* list2 = nullptr;

//     // Populate list1 with values 1, 3, 5
//     for (int i = 1; i <= 5; i += 2) {
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = list1;
//         list1 = newNode;
//     }

//     // Populate list2 with values 2, 4, 6
//     for (int i = 2; i <= 6; i += 2) {
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = list2;
//         list2 = newNode;
//     }

//     Node* mergedList = mergeSortedLists(list1, list2);

//     std::cout << "Merged Sorted List: ";
//     printList(mergedList);

//     return 0;
// }

//***************************************************************************
#include <iostream>

class Node {
		public:
    int data;
    Node* next;
};

Node* findMiddle(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node;
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    Node* middleNode = findMiddle(head);

    std::cout << "Middle Node: " << middleNode->data << std::endl;

    return 0;
}