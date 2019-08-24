#include <iostream>
#include <cstring>
#ifndef H_ARRAYQUEUE
#define H_ARRAYQUEUE
/*note the first element in the queue is added to the 1st position not the 0th
I dont see this as a problem because of the circular nature of the array
if the last position is used then the 0th position will be used if the capacity is available*/
class Queue{
  public:

    Queue(int capacity);
    int size()const;
    bool empty() const;
    void Enqueue(std::string element);
    void Dequeue();
    //return the front element
    std::string& front()const;
    //return the rear element
    std::string& back()const;
    void printQueue()const;
  private:
    std::string* Qarray;
    int capacity;
    int n;
    int frontpos;
    int rearpos;

};
#endif
