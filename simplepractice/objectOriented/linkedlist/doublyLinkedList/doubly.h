#include <iostream>

#ifndef H_DOUBLY
#define H_DOUBLY

class Node{
  int element;
  Node* prev;
  Node* next;
  friend class LinkedList;
};
class LinkedList{
  public:
    LinkedList(); //make sentinal connected to eachother
    ~LinkedList();//ensure list is empty then delete sentinals
    bool isEmpty() const;
    const int& getFront() const;
    const int& getBack() const;
    void addNode(Node* selectNode, const int& newElement);//adds new node after a select node with the given element
    void removeNode(Node* selectedNode);
    void addFront(const int& newElement);
    void addBack(const int& newElement);
  //  int countNodes() const;//count nodes between header and trailer
    void removeFront();
    void removeBack();
    void printList() const;
  private:
    Node* header;
    Node* trailer;

};


#endif
