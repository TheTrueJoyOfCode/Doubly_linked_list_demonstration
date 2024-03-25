#ifndef NODE_H
#define NODE_H

// This is a Node in a linked list.
struct Node {
private:
    int data;   // The data of the node
    Node* next; // The next node in the list
    Node* prev; // The previous node in the list

public:
    Node(int data = 0, Node* next = nullptr, Node* prev = nullptr); // Constructor
    int getData() const;                // Get the data of the node
    void setData(int data);            // Set the data of the node
    Node* getNext() const;             // Get the next node in the list
    void setNext(Node* next);          // Set next node in list
    Node* getPrev() const;             // Get previous node in list
    void setPrev(Node* prev);          // Sets the previous node in list
};

#endif // NODE_H