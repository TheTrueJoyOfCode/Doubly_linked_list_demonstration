#include "LinkedList.h"
#include <iostream>
/*
 The purpose of this class is to test the functionality of a doubly linked list
 class.

  it tests each edge case  printing the expected and actual result of each test.
  */

int main() {
  LinkedList *list = new LinkedList();
  // creating empty list.
  std::cout << "Following list should be empty: " << list->toString()
            << std::endl;
  // attempting removal from an empty list
  std::cout << " attempting to remove item from empty list: " << list->remove(1)
            << " expected: -1  denoting failure" << std::endl;
  // attempting addition to a list
  list->add(1);
  std::cout << "Adding 1 to an empty list: " << list->toString()
            << " expected: 1" << std::endl;
  //   attempting removal of the only list element
  list->remove(1);
  std::cout << "Removing the only element: " << list->toString()
            << " expected:" << std::endl;
  // attempting to add more elements to the list
  list->add(1);
  list->add(2);
  list->add(3);
  list->add(4);
  list->add(5);
  std::cout << "Added to a list: " << list->toString()
            << " expected: 1, 2, 3, 4, 5" << std::endl;
  // attempting to remove an element
  list->remove(3);
  std::cout << "Removed 3: " << list->toString() << " expected: 1, 2, 4, 5"
            << std::endl;
  // attempting to remove the last element
  list->remove(5);
  std::cout << "Removed the last element (5): " << list->toString()
            << " expected: 1, 2, 4" << std::endl;
  // attempting to remove the first element
  list->remove(1);
  std::cout << "Removed the first element: " << list->toString()
            << " expected: 2, 4" << std::endl;
  // attempting to remove non-existent element
  std::cout << " attempting to remove non-existent element " << list->remove(6)
            << " expected: -1" << std::endl;

  std::cout << "Removed an element that is not present: " << list->toString()
            << " expected: 2, 4" << std::endl;
}