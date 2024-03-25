#include "LinkedList.h"
#include <iostream>

int main() {
  // test code for linked lists
  LinkedList *list = new LinkedList();
  //  edge case: empty list
  std::cout << "Empty list: " << list->toString() << std::endl;
  //  removing from an empty list
  std::cout << "Removing from an empty list: " << list->remove(1)
            << " expected: -1" << std::endl;
  //  adding to an empty list
  list->add(1);
  std::cout << "Adding to an empty list: " <<  list->toString() << " expected: 1" << std::endl;
  //  removing the only element
  list->remove(1);
  std::cout << "Removing the only element: " << list->toString()
            << " expected:" << std::endl;
  //  adding to a list
  list->add(1);
  list->add(2);
  list->add(3);
  list->add(4);
  list->add(5);
  std::cout << "Added to a list: " << list->toString()
            << " expected: 1, 2, 3, 4, 5" << std::endl;
  // removing an element
  list->remove(3);
  std::cout << "Removed an element: " << list->toString()
            << " expected: 1, 2, 4, 5" << std::endl;
  // removing the last element
  list->remove(5);
  std::cout << "Removed the last element: " << list->toString()
            << " expected: 1, 2, 4" << std::endl;
  // removing the first element
  list->remove(1);
  std::cout << "Removed the first element: " << list->toString()
            << " expected: 2, 4" << std::endl;
  // removing an element that is not present
  list->remove(1);
  std::cout << "Removed an element that is not present: " << list->toString()
            << " expected: 2, 4" << std::endl;
}