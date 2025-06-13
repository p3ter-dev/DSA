#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val) {
        value = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    // Insert at tail
    void push(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }

    // Remove from tail
    Node* pop() {
        if (!head) return nullptr;
        Node* poppedNode = tail;
        if (length == 1) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
            poppedNode->prev = nullptr;
        }
        length--;
        return poppedNode;
    }

    // Remove from head
    Node* shift() {
        if (!head) return nullptr;
        Node* oldHead = head;
        if (length == 1) {
            head = tail = nullptr;
        } else {
            head = oldHead->next;
            head->prev = nullptr;
            oldHead->next = nullptr;
        }
        length--;
        return oldHead;
    }

    // Insert at head
    void unshift(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            head = tail = newNode;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    // Access by index
    Node* get(int index) {
        if (index < 0 || index >= length) return nullptr;
        Node* current;
        if (index <= length / 2) {
            current = head;
            int count = 0;
            while (count != index) {
                current = current->next;
                count++;
            }
        } else {
            current = tail;
            int count = length - 1;
            while (count != index) {
                current = current->prev;
                count--;
            }
        }
        return current;
    }

    // Set value by index
    bool set(int index, int value) {
        Node* foundNode = get(index);
        if (foundNode != nullptr) {
            foundNode->value = value;
            return true;
        }
        return false;
    }

    // Insert at specific index
    bool insert(int index, int value) {
        if (index < 0 || index > length) return false;
        if (index == 0) {
            unshift(value);
            return true;
        }
        if (index == length) {
            push(value);
            return true;
        }

        Node* newNode = new Node(value);
        Node* beforeNode = get(index - 1);
        Node* afterNode = beforeNode->next;
        beforeNode->next = newNode;
        newNode->prev = beforeNode;
        newNode->next = afterNode;
        afterNode->prev = newNode;
        length++;
        return true;
    }

    // Remove at specific index
    Node* remove(int index) {
        if (index < 0 || index >= length) return nullptr;
        if (index == 0) return shift();
        if (index == length - 1) return pop();

        Node* removedNode = get(index);
        Node* beforeNode = removedNode->prev;
        Node* afterNode = removedNode->next;
        beforeNode->next = afterNode;
        afterNode->prev = beforeNode;
        removedNode->next = removedNode->prev = nullptr;
        length--;
        return removedNode;
    }

    // For debugging - print list forward
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Get length of list
    int size() {
        return length;
    }
};
