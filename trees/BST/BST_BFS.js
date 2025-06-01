class Node {
    constructor(value) {
        this.value = value
        this.left = null
        this.right = null
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null
    }

    insert(value) { //helps to insert value in a binary tree
        let newNode = new Node(value)
        if (this.root === null) {
            this.root = newNode
            return this
        }
        let current = this.root
        while(true) {
            if (value === current.value) return undefined
            if (value < current.value) {
                if (current.left === null) {
                    current.left = newNode
                    return this
                }
                current = current.left
            } else if (value > current.value) {
                if (current.right === null) {
                    current.right = newNode
                    return this
                }
                current = current.right
            }
        }
    }

    contains(value) { //helps us to find if a binary tree contains that value
        let found = false
        let current = this.root
        if (current === null) return null

        while (current && !found) {
            if (value < current.value) {
                current = current.left
            } else if (value > current.value) {
                current = current.right
            } else {
                return true
            }
        }
        return false
    }

    BFS() { //breadth first search implementation
        let data = [], 
            queue = [], 
            node = this.root;
        queue.push(node);
        while (queue.length) {
            node = queue.shift();
            data.push(node.value);
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
        return data;
    }
}