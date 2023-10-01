#include <iostream>
#include <string>

using namespace std;

// Define a struct for the linked list node
struct Node {
    string data;
    Node* next;

    Node(const string& val) : data(val), next(nullptr) {}
};

// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, const string& value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete the last node from the linked list
void deleteLastNode(Node*& head) {
    if (head == nullptr) {
        return; // List is empty, nothing to delete
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return; // List has only one node, delete it
    }

    Node* current = head;
    Node* prev = nullptr;

    while (current->next != nullptr) {
        prev = current;
        current = current->next;
    }

    delete current;
    prev->next = nullptr;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume newline

    string value;
    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        getline(cin, value);
        insertAtEnd(head, value);
    }

    // Delete the last node
    deleteLastNode(head);

    // Output the modified linked list
    printLinkedList(head);

    // Clean up memory (delete all nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

