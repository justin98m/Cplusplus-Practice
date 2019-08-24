#include "stack.h"
using namespace std;
// O(1)
Stack::Stack(int size){
  capacity = size;
  stackArray = new int[capacity];
  topelement = -1;
}
// O(1)
const int Stack::top()const{
  if(isEmpty())
    return -8888;//just to let me know the stack is empty
  //since topelement starts at -1 we do not have to adjust the array postitioning
  return stackArray[topelement];
}

int Stack:: size()const{
    //The positoning of the top element plus 1 will indicates the size of the Stack
    return topelement + 1;
}
bool Stack::isEmpty()const{
  //return false if filled or true if -1 aka empty
  return topelement == -1;
}
void Stack::push(const int& element){
    cout << "\ncapacity: " << capacity << endl;
//check to see if the stack is at capacity before adding another val
    if(topelement < capacity-1){
      topelement++;
      stackArray[topelement] = element;
  }
    else
      cout << "Error: Stack is full";


}
void Stack::pop(){
  if(topelement != -1)
    topelement--;
}
Stack::~Stack(){
  delete[] stackArray;
}
