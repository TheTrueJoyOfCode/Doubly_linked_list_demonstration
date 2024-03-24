#include <iostream>
#include "LinkedList.cpp"


int main() {
  // test code for linked lists
  LinkedList *list = new LinkedList();
  //  edge case: empty list
  std::cout << list->toString() << ":empty list" << std::endl;
  //  removing from an empty list
  list->remove(1);
  std::cout << list->toString() << ":empty list" << std::endl;
  //  adding to an empty list
  list->add(1);
  std::cout << list->toString() << ":1" << std::endl;
  //  removing the only element
  list->remove(1);
  std::cout << list->toString() << ":empty list" << std::endl;
  //  adding to a list
  list->add(1);
  list->add(2);
  list->add(3);
  list->add(4);
  list->add(5);
  std::cout << list->toString() << ":1, 2, 3, 4, 5" << std::endl;
  // removing an elemt
  list->remove(3);
  std::cout << list->toString() << ":1, 2, 4, 5" << std::endl;
  // removing the last element
  list->remove(5);
  std::cout << list->toString() << ":1, 2, 4" << std::endl;
  // removing the first element
  list->remove(1);
  std::cout << list->toString() << ":2, 4" << std::endl;
  // removing  element that is not present
  list->remove(1);
  std::cout << list->toString() << ":2, 4" << std::endl;
}