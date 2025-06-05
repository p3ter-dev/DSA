#include <iostream>

using namespace std;

int linearSearch(int array, int value) {
    for (int i = 0; i < array.length(); i++) {
        if (array[i] == value) return i;
        return -1;
    }
}

int main() {
    int result = linearSearch({1, 2, 3, 4, 5, 6, 8}, 7);
    cout << result << endl;
}
