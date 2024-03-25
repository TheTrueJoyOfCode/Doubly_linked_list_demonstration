#include "Node.h"

Node::Node(int dataVal, Node* nextNode, Node* prevNode) 
    : data(dataVal), next(nextNode), prev(prevNode) {}
//  get data from the node
int Node::getData() const {
    return data;
}
// set nodes data 
void Node::setData(int dataVal) {
    data = dataVal;
}
//  get next node in list 
Node* Node::getNext() const {
    return next;
}
// set next node in list
void Node::setNext(Node* nextNode) {
    next = nextNode;
}
//  get previous node in list
Node* Node::getPrev() const {
    return prev;
}
// set previous node in list
void Node::setPrev(Node* prevNode) {
    prev = prevNode;
}