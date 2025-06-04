#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) { // constructor
        this->value = value;
        this->next = nullptr;
    }
};

class Stack {
private:
    Node* first;
    Node* last;
    int size;
public:
    Stack() {
        this->first = nullptr;
        this->last = nullptr;
        this->size = 0;
    }

    int push(int value) {
        Node* newNode = new Node(value);
        if (first == nullptr) {
            first = newNode;
            last = newNode;
        } else {
            newNode->next = first;
            first = newNode;
        }
        return ++size;
    }

    int pop() {
        if (!first) return -1; //we return null

        Node* temp = first;
        if (first == last) {
            last = nullptr;
        }
        first = first->next;
        int returnedValue = temp->value;
        delete temp;
        --size;
        return returnedValue;
    }

    int getSize() {
        return size;
    }
};