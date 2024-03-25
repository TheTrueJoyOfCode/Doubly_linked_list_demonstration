#include "LinkedList.h"
#include "Node.h"
#include <string>

#include "Node.h"
// Constructor for linked list
LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}
// Add element to linked list
void LinkedList::add(int data) {
  // Making the new node
  Node *newNode = new Node(data,nullptr,nullptr);
  // If the list is empty
  if (this->head == nullptr) {
    // Set the head and tail to beThe new node
    this->head = newNode;
    this->tail = newNode;
  }
  // If the list is not empty
  else {
    // Add new element beyond the current tail
    tail->setNext(newNode);
    // Set previous node of current element to previous tail
    newNode->setPrev(tail);
    // Set the new tail to be the new node
    tail = newNode;
  }
}
// Remove element from linked list
int LinkedList::remove(int data) {
  // If the list is empty return -1 as error
  if (this->head == nullptr) {
    return -1;
  }
  // If the list is not empty
  Node *current = this->head;
  // Generate through each element in the list
  while (current != nullptr) {
    // If the current element is the element to be removed
    if (current->getData() == data) {
      Node *prev = current->getPrev();
      Node *next = current->getNext();
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
      // Returning one to show success
      return 1;
    }
    current = current->getNext();
  }
  // Reached the end of the list without finding element
  return 0;
};
// Generates a list of elements as a string
std::string LinkedList::toString() {
  std::string result = "";
  Node *current = this->head;
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
  Node *current = this->head;
  // Iterates through and deletes each node
  while (current != nullptr) {
    Node *next = current->getNext();
    delete current;
    current = next;
  }
};
