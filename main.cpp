#include "LinkedList.cpp"
#include <iostream>

int main() {
  // test code for linked lists
  LinkedList *list = new LinkedList();
  //  edge case: empty list
  std::cout << "Empty list: " << list->toString() << std::endl;
  //  removing from an empty list
  std::cout << "Removing from an empty list: " << list->remove(1)
            << " expeceted: -1" << std::endl;
  //  adding to an empty list
  list->add(1);
  std::cout << "Empty list: " << list->toString() << std::endl;
  //  removing the only element
  list->remove(1);
  std::cout << "Removing the only element: " << list->toString()
            << "expeceted:" << std::endl;
  //  adding to a list
  list->add(1);
  list->add(2);
  list->add(3);
  list->add(4);
  list->add(5);
  std::cout << "added to a list: " << list->toString()
            << "expeceted: 1, 2, 3, 4, 5" << std::endl;
  // removing an elemt
  list->remove(3);
  std::cout << "removed an element: " << list->toString()
            << "expeceted: 1, 2, 4, 5" << std::endl;
  // removing the last element
  list->remove(5);
  std::cout << "removed the last element: " << list->toString()
            << "expeceted: 1, 2, 4" << std::endl;
  // removing the first element
  list->remove(1);
  std::cout << "removed the first element: " << list->toString()
            << "expeceted: 2, 4" << std::endl;
  // removing  element that is not present
  list->remove(1);
  std::cout << "removed an element tha is not present: " << list->toString()
            << "expeceted: 2, 4" << std::endl;
}