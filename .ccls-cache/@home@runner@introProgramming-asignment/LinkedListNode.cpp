#include "LinkedListNode.h"

LinkedListNode::LinkedListNode(int dataVal, LinkedListNode* nextNode, LinkedListNode* prevNode) 
    : data(dataVal), next(nextNode), prev(prevNode) {}
//  get data from the node
int LinkedListNode::getData() const {
    return data;
}
// set nodes data 
void LinkedListNode::setData(int dataVal) {
    data = dataVal;
}
//  get next node in list 
LinkedListNode* LinkedListNode::getNext() const {
    return next;
}
// set next node in list
void LinkedListNode::setNext(LinkedListNode* nextNode) {
    next = nextNode;
}
//  get previous node in list
LinkedListNode* LinkedListNode::getPrev() const {
    return prev;
}
// set previous node in list
void LinkedListNode::setPrev(LinkedListNode* prevNode) {
    prev = prevNode;
}