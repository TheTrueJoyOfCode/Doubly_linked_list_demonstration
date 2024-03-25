#include "Node.h"

Node::Node(int dataVal, Node* nextNode, Node* prevNode) 
    : data(dataVal), next(nextNode), prev(prevNode) {}
//  get data from node
int Node::getData() const {
    return data;
}
// set no data
void Node::setData(int dataVal) {
    data = dataVal;
}
//  get next node
Node* Node::getNext() const {
    return next;
}
// set next node
void Node::setNext(Node* nextNode) {
    next = nextNode;
}
//  get previous node
Node* Node::getPrev() const {
    return prev;
}
// set previous node
void Node::setPrev(Node* prevNode) {
    prev = prevNode;
}