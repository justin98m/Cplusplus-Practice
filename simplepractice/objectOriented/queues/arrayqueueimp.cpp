#include "arrayqueue.h"
using namespace std;

//all functions assume the user will not add elements to a filled Queue
//or take away elements from a empty Queue
//O(1)
Queue::Queue(int cap){
  capacity = cap;
  n = 0;
  frontpos = 0;
  rearpos = 0;
  Qarray = new string[capacity];;

}//O(1)
int Queue::size()const{
  return n;

}//O(1)
bool Queue::empty()const{
  return n == 0;
}//O(1)
void Queue::Enqueue(string element){

  //if rear == n then rear will be set to 0 to avoid leaving the arrays bounds
  Qarray[rearpos] = element;

  rearpos = (rearpos + 1) % capacity;
  n++;


}//O(1)
void Queue::Dequeue(){
  //yes the element is still in the array but it's not in the queue any longer
  //when the previous front's position is came up to again it will be replaced
  frontpos = (frontpos + 1) % capacity;
  n--;
}//O(1)
string& Queue::front()const{
  return Qarray[frontpos];
}//O(1)
string& Queue::back()const{
  return Qarray[rearpos];
}
//O(n)
//this function iterates array starting at the front position until the rear position is found, to counteract going out of bounds
void Queue::printQueue()const{

  //when printing out we will start at the front element
  int i = frontpos;
  cout << "\nHere is your queue: ";

  while(i != rearpos || (i == rearpos && capacity == n)){
    cout << " "<< Qarray[i];
    //allow i to follow the array elements in their circular nature
    i = (i + 1) % capacity;
    //happens when we've printed the last elem 
    if(i == rearpos)
      break;
  }
}
