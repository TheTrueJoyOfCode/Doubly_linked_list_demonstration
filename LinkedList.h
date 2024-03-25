#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListNode.h"
#include <string>

// LinkedList class definition
class LinkedList {
private:
  LinkedListNode *head; // head of linked list
  LinkedListNode *tail; // tale of linked list

public:
  LinkedList();           // The constructor
  ~LinkedList();          // The destructor
  void add(int data);     // Add item to link list
  int remove(int data);   // Remove item from link list
  std::string toString(); // Convert linked list to string
  LinkedListNode *getHead();        // get the head of the linked list
  LinkedListNode *getTail();        // get the tail of the linked list
};

#endif // LINKEDLIST_H
