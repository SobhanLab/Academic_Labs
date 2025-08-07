#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* createLinkedList(int arr[], int size) {
    Node* head = nullptr;
    Node* temp = nullptr;
    Node* current = nullptr;

    for (int i = 0; i < size; ++i) {
        temp = new Node(arr[i]);

        if (head == nullptr) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
}

Node* searchLinkedList(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int main() {
    int size;
    cout << "Enter Number of Elements: ";
    cin >> size;

    int* a = new int[size];
    cout << "Enter " << size << " Integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    Node* head = createLinkedList(a, size);
    Node* current = head;

    cout << "Linked List: ";
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    Node* result = searchLinkedList(head, key);

    if (result != nullptr) {
        cout << "Element " << key << " found at node with address: " << result << endl;
    } else {
        cout << "Element " << key << " not found in the list." << endl;
    }

    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    delete[] a;

    return 0;
}
