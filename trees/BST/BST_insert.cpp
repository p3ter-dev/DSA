class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node(int value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
}

class BinarySearchTree {
public:
    Node* root;
    BinarySearchTree() {
        this->root = nullptr;
    }

    bool insert(int value) {
        Node* newNode = new Node(value);
        if (!root) {
            root = newNode;
            return true;
        }
        Node* current = root;
        while(true) {
            if(value == current->value) return -1;
            if (value < current->value) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    return this;
                }
                current = current->left;
            } else if(value > current->value) {
                if (current->right == nullptr) {
                    current->right = newNode;
                    return this;
                }
                current = current->value;
            }
        }
    }

    bool contains(int value) {
        bool found = false;
        Node* current = root;
        if (current == nullptr) return nullptr;
        while(current && !found) {
            if (value < current->value) {
                current = current->left;
            } else if (value > current) {
                current = current->right;
            } else return true;
        }
        return false;
    }    
}
