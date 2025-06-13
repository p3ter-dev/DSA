#include <vector>
#include <list>
#include <string>
using namespace std;

class HashTable {
private:
    vector<list<pair<string, string>>> keyMap;
    int size;

    int _hash(const string& key) {// hash function
        int total = 0;
        int PRIME_NUMBER = 31;
        for (int i = 0; i < min((int)key.length(), 100); i++) {
            char ch = key[i];
            int value = tolower(ch) - 96;
            total = (total * PRIME_NUMBER + value) % size;
        }
        return total;
    }

public:
    HashTable(int s = 53) {
        size = s;
        keyMap.resize(size);
    }

    void set(const string& key, const string& value) {
        int index = _hash(key);
        for (auto& pair : keyMap[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        keyMap[index].push_back(make_pair(key, value));
    }

    string get(const string& key) {
        int index = _hash(key);
        for (const auto& pair : keyMap[index]) {
            if (pair.first == key) return pair.second;
        }
        return "undefined";
    }
};