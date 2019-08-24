#include "singlyLinkedList.h"
using namespace std;
Linkedlist::Linkedlist(){
  head = NULL;
}
bool Linkedlist::isEmpty() const{
  if (head == NULL)
    return true;
  else
    return false;
}
const int& Linkedlist::getFrontNode() const{
  return head->element;
}
void Linkedlist::removeFront(){
  //set head to old
  Node* old = head;
  //set the new head to the next node
  head = old->next;
  //delete the previous head
  delete old;
}
void Linkedlist::addFront(int content){
  //create a new Node
  Node* v = new Node;
  //store new node's element
  v->element = content;
  //set next to previous head
  v->next = head;
  //Set new node to current head
  head = v;
}
void Linkedlist::printList() const{
  bool Tail = false;
  int i;
  Node* currentNode = head;

  if (currentNode == NULL){
    Tail = true;
    cout <<"\n list is empty";}
    else
      cout << "\nList : ";
  //while the tail is not found
  while(!Tail){
    //if the next node is node the previous node was the tail
    if (currentNode == NULL){
      Tail = true;
      break;
    }

    //print out the current node's element
    cout << " -> " << currentNode-> element;
    //set current to the next Node
    currentNode = currentNode->next;

  }
  cout  << endl;
}
