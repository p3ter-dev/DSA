// node class constructor
class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
        this.prev = null;
    }
}

//doubly linked list class constructor
class DoublyLinkedList {
    constructor() {
        this.head = null;
        this.tail = null;
        this.length = 0;
    }

    push(value) { //inserting a node to the tail of the list
        let newNode = new Node(value);
        if (!this.head || this.length === 0) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.tail.next = newNode;
            newNode.prev = this.tail;
            this.tail = newNode;
        }
        this.length++;
        return this;
    }

    pop() { //removing a node from the tail of the list
        if (!this.head) return undefined;
        let poppedNode = this.tail;
        if (this.length === 1) {
            this.head = null;
            this.tail = null;
        } else {
            this.tail = poppedNode.prev;
            this.tail.next = null; //breaking the bond
            poppedNode.prev = null; //breaking the backward link
        }
        this.length--;
        return poppedNode;
    }

    shift() { //removing a node from the head of the list
        if (!this.head) return undefined;
        let oldHead = this.head;
        if (this.length === 1) {
            this.head = null;
            this.tail = null;
        } else {                              
            this.head = oldHead.next;
            this.head.prev = null;
            oldHead.next = null;
        }
        this.length--;
        return oldHead;                       
    }

    unshift(value) { //inserting a node to the head of the list
        let newNode = new Node(value);
        if (this.length === 0) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.head.prev = newNode;
            newNode.next = this.head;
            this.head = newNode;
        }
        this.length++;
        return this;
    }

    get(index) { //accessing a node by its position in DLL
        if (index < 0 || index >= this.length) return undefined;
        if (index <= this.length / 2) {
            let count = 0;
            let current = this.head;
            while(count != index) {
                current = current.next;
                count++;
            }
        } else {
            let count = this.length - 1;
            let current = this.tail;
            while (count != index) {
                current = current.prev;
                count--;
            }
        }
        return current;
    }

    set(index, value) { //replacing the value of a node in DLL
        let foundNode = this.get(index);
        if (foundNode != null) {
            foundNode.value = value;
            return true;
        }
        return false;
    }

    insert(index, value) { //adding a node in DLL by a certain position
        if (index < 0 || index > this.length) return false;
        if (index === 0) return this.unshift(value);
        if (index === this.length) return this.push(value);
        let insertedNode = new Node(value);
        let beforeNode = this.get(index - 1);
        let afterNode = beforeNode.next;
        beforeNode.next = insertedNode;
        insertedNode.prev = beforeNode;
        insertedNode.next = afterNode;
        afterNode.prev = insertedNode;
        this.length++;
        return true;
    }

    remove(index) { //removing a node in DLL by a certain position
        if (index < 0 || index >= this.length) return undefined;
        if (index === 0) return this.shift();
        if (index === this.length - 1) return this.pop();

        let removedNode = this.get(index);
        let beforeNode = removedNode.prev;
        let afterNode = removedNode.next;
        beforeNode.next = afterNode;
        afterNode.prev = beforeNode;
        afterNode = null;
        beforeNode = null;
        this.length--;
        return removedNode;
    }
}