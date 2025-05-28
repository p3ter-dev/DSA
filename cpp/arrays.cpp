#include <iostream>
#include <string>

using namespace std;

class StaticArray {
private:
    int* data;
    int capacity;
    int length;

public:
    StaticArray(int cap = 4) : capacity(cap), length(0) {
        data = new int[capacity];
    }

    void insertEnd(int value) {
        if (length < capacity) {
            data[length++] = value;
        } else {
            cout << " " << endl;
        }
    };

    void removeEnd() {
        if (length > 0) {
            length--;
        } else {
            cout << " " << endl;
        }
    }

    void insertMiddle(int index, int value) {
        for(i = length - 1; i >= index; i--) {
            data[i + 1] = data[i];
        }
        data[index] = value;
        length++;
    }
};