#include "doubly.h"
using namespace std;

LinkedList::LinkedList(){
  header = new Node;
  trailer = new Node;
  header->next = trailer;
  trailer->prev = header;
}
bool LinkedList::isEmpty()const{
  if(header->next == trailer)
    return true;
  else
    return false;
}
const int& LinkedList:: getFront() const{
  return header->next->element;
}
const int& LinkedList:: getBack() const{
  return trailer->prev->element;
}
void LinkedList::addNode(Node* selectNode, const int& newElement){
//create new Node
  Node* newNode = new Node;
  newNode->element = newElement;
//set new node previous node to the selected Node
  newNode-> prev = selectNode;
  //make newNode's next node the selected node's next
  newNode-> next = selectNode->next;
  //change selectnodes next to the new node
  selectNode-> next = newNode;
  //update select's old next to the new node's next
  newNode->next->prev = newNode;
}
void LinkedList:: addFront(const int& newElement){
  //add node after the header Node
  addNode(header, newElement);
}
void LinkedList:: addBack(const int& newElement){
  //add node after the trailes previous node
  addNode(trailer->prev, newElement);
}
/*int countNodes()const{
  Node* currentNode = header;
  int count = 0;
  while(currentNode->next != trailer){
    count++;
  }
  return count;
}*/
void LinkedList:: removeNode(Node* selectedNode){
  //make the previous node change its next node to the selected node next node
  selectedNode->prev->next = selectedNode->next;
  //make the next node change its previos node to the selected nodes prev node
  selectedNode->next->prev = selectedNode->prev;
  delete selectedNode;
}
void LinkedList:: removeFront(){
  removeNode(header->next);
}
void LinkedList:: removeBack(){
  removeNode(trailer->prev);
}
void LinkedList:: printList() const{
  Node* currentNode = header;
  if(header->next == trailer){
    cout <<"\n List is empty";
  }
  else{
    cout << "\nCurrent List: ";
    //Print out the next node as long as the next node is not the trailer
    while(currentNode->next != trailer){
      cout << currentNode-> next->element << "->";
      currentNode = currentNode->next;
    }
  }
  cout << endl;
}
LinkedList::~LinkedList(){
  while (isEmpty()) {removeFront();}
  delete header;
  delete trailer;

}
