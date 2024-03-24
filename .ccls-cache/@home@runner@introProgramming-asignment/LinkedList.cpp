#include <string>
struct Node {
private:
  int data;
  Node *next;
  Node *prev;

public:
Node(int data, Node *next = nullptr, Node *prev = nullptr): data(data), next(next), prev(prev) {}
  int getData() { return this->data; }
  void setData(int data) { this->data = data; }
  Node *getNext() { return this->next; }
  void setNext(Node *next) { this->next = next; }
  Node *getPrev() { return this->prev; }
  void setPrev(Node *prev) { this->prev = prev; }
};

class LinkedList {
private:
  // I could have used unique pointer to handle memory management but I wanted
  // to use a regular pointer for this exercise
  Node *head;
  Node *tail;

public:
  LinkedList() : head(nullptr), tail(nullptr){}
  void add(int data) {
    Node *newNode = new Node(data);
    if (this->head == nullptr) {
      this->head = newNode;
      this->tail = newNode;
      
    } else {
      if (this->tail == nullptr) {
        this->tail = newNode;
        this->head->setNext(this->tail);
        this->tail->setPrev(this->head);
      } else {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail = newNode;
      }
    }
  }
  int remove(int data) {
    if (this->head == nullptr) {
      return -1;
    }
    Node *current = this->head;
    while (current != nullptr) {
      if (current->getData() == data) {
        Node *prev = current->getPrev();
        Node *next = current->getNext();
        if (next != nullptr) {
          next->setPrev(prev);
        }
        if (prev != nullptr) {
          prev->setNext(next);
        }
        if(current == this->tail) {
          this->tail = prev;
        }
        if (current == this->head) {
          this->head = current->getNext();
        }
        if (current != nullptr)
        {
          delete current;
        }
        return 1;
      }
      current = current->getNext();
    }
    return 0;
  };
  // to string
  std::string toString() {
    std::string result = "";
    Node *current = this->head;
    while (current != nullptr) {
      result += std::to_string(current->getData()) + ", ";
      current = current->getNext();
    }
    return result;
  }
  // deconstrutor
  ~LinkedList() {
    Node *current = this->head;
    while (current != nullptr) {
      Node *next = current->getNext();
      delete current;
      current = next;
    }
  }
};
