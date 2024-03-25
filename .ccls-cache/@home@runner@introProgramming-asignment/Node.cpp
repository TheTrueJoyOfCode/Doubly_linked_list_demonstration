#include "Node.h"

Node::Node(int dataVal, Node* nextNode, Node* prevNode) 
    : data(dataVal), next(nextNode), prev(prevNode) {}

int Node::getData() const {
    return data;
}

void Node::setData(int dataVal) {
    data = dataVal;
}

Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}

Node* Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node* prevNode) {
    prev = prevNode;
}