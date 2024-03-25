#include "LinkedList.h"
#include <string>
// This class implements a doubly linked list
//and the necessary functions forAdding and removing elements
// linked list constructor
LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}
// append element to link list
void LinkedList::add(int data) {
  // Making the new node
  LinkedListNode *newNode = new LinkedListNode(data,nullptr,nullptr);
  // if the list is empty treat new node like root note
  if (this->head == nullptr) {
    // Set the head and tail to beThe new node
    this->head = newNode;
    this->tail = newNode;
  }
  //  if list is not empty append item to list
  else {
    // Add new element beyond the current tail
    tail->setNext(newNode);
    // Set previous node of current element to previous tail
    newNode->setPrev(tail);
    // Set the new tail to be the new node
    tail = newNode;
  }
}
// Remove element from linked list  and connect  adjacent  nodes
int LinkedList::remove(int data) {
  // If the list is empty return -1 as error
  if (this->head == nullptr) {
    return -1;
  }
  LinkedListNode *current = this->head;
  //  iterate through each element in the list
  while (current != nullptr) {
    // If the current element is the element to be removed
    if (current->getData() == data) {
      LinkedListNode *prev = current->getPrev();
      LinkedListNode *next = current->getNext();
      // Connecting the previous and next nodes to each other
      if (next != nullptr) {
        next->setPrev(prev);
      }
      if (prev != nullptr) {
        prev->setNext(next);
      }
      if (current == this->tail) {
        this->tail = prev;
      }
      if (current == this->head) {
        this->head = current->getNext();
      }
      // Deleting the current node
      delete current;
      // Returning 0 to show success
      return 0;
    }
    current = current->getNext();
  }
  // Reached the end of the list without finding element
  return -1;
};
// Generates a list of elements as a string
std::string LinkedList::toString() {
  std::string result = "";
  LinkedListNode *current = this->head;
  while (current != nullptr) {
    result += std::to_string(current->getData());
    if (current->getNext() != nullptr) {
      result += ", ";
    }
    current = current->getNext();
  }
  return result;
}
// deconstrutor
LinkedList::~LinkedList() {
  LinkedListNode *current = this->head;
  // Iterates through and deletes each node
  while (current != nullptr) {
    LinkedListNode *next = current->getNext();
    delete current;
    current = next;
  }
};
