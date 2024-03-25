#ifndef LLNODE_H
#define LLNODE_H

// This is a Node in a linked list.
struct LinkedListNode {
private:
    int data;   // The data of the node
    LinkedListNode* next; // The next node in the list
    LinkedListNode* prev; // The previous node in the list

public:
    LinkedListNode(int data = 0, LinkedListNode* next = nullptr, LinkedListNode* prev = nullptr); // Constructor
    int getData() const;                // Get the data of the node
    void setData(int data);            // Set the data of the node
    LinkedListNode* getNext() const;             // Get the next node in the list
    void setNext(LinkedListNode* next);          // Set next node in list
    LinkedListNode* getPrev() const;             // Get previous node in list
    void setPrev(LinkedListNode* prev);          // Sets the previous node in list
};
#endif // NODE_H