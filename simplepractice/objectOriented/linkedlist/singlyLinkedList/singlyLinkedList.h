#include <iostream>
#include <cstring>
#ifndef H_SINGLYLINKEDLIST
#define H_SINGLYLINKEDLIST

class Node{
  int element;
  Node* next;
  friend class Linkedlist;

};

class Linkedlist{
  public:
    Linkedlist();
    bool isEmpty() const;
    const int& getFrontNode() const;
    void removeFront();
    void addFront(int content);
    void printList() const;

  private:
    Node* head;

};
#endif
