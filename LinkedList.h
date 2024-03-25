#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>

// LinkedList class definition
class LinkedList {
private:
  Node *head; // head of linked list
  Node *tail; // tale of linked list

public:
  LinkedList();           // The constructor
  ~LinkedList();          // The destructor
  void add(int data);     // Add item to link list
  int remove(int data);   // Remove item from link list
  std::string toString(); // Convert linked list to string
  Node *getHead();        // get the head of the linked list
  Node *getTail();        // get the tail of the linked list
};

#endif // LINKEDLIST_H
