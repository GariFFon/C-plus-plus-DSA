#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* CreateNode(int value) {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}

Node* CreatLL(int arr[], int size, Node*& head) {
    Node* current = nullptr;

    for (int i = 0; i < size; i++) {
        Node* temp = CreateNode(arr[i]);
        if (head == nullptr) {
            head = temp;
            current = head;
        } else {
            current->next = temp;
            current = temp;
        }
    }
    current->next = head;  // This is the main line to make it circular.
    return head;
}

void Display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;
}

void DeleteAtFirst(Node*& head) {
    if (head == nullptr) return;
    
    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    if (head->next == head) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        head = head->next;
        last->next = head;
        delete temp;
    }
}

void DeleteAtEnd(Node*& head) {
    if (head == nullptr) return;
    
    Node* current = head;
    Node* previous = nullptr;
    
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }
    
    while (current->next != head) {
        previous = current;
        current = current->next;
    }
    
    previous->next = head;
    delete current;
}

void DeleteAtPosition(Node*& head, int position) {
    if (head == nullptr) return;

    if (position == 1) {
        DeleteAtFirst(head);
        return;
    }

    Node* current = head;
    Node* previous = nullptr;

    for (int i = 1; i < position && current->next != head; i++) {
        previous = current;
        current = current->next;
    }

    if (current == head) {
        cout << "Position out of range!" << endl;
        return;
    }

    previous->next = current->next;
    delete current;  
}

int main() {
    Node* head = nullptr;

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    CreatLL(arr, size, head);

    cout << "Original Linked List: ";
    Display(head);

    cout << "Deleting first node..." << endl;
    DeleteAtFirst(head);
    Display(head);

    cout << "Deleting node at position 2..." << endl;
    DeleteAtPosition(head, 2);
    Display(head);

    cout << "Deleting last node..." << endl;
    DeleteAtEnd(head);
    Display(head);

    return 0;
}
