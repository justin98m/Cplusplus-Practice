//class provides the interface various implementations of stacks you'll see in this folder except for vector stack
#include <iostream>
#ifndef STACK_H
#define STACK_H
class Stack
{

  public:
      Stack(int size);
      const int top()const;
      int size()const;
      bool isEmpty()const;
      void push(const int& element);
      void pop();
      ~Stack();
  private:
    int topelement;
    int* stackArray;
    int capacity;
};
#endif
