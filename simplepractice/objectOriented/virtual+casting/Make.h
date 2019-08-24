#include <iostream>
#include <cstring>
#ifndef VIRTUAL_H
#define VIRTUAL_H

class Make{
  public:
    Make();
    //incase a instance needs to be deleted
    //virtual incase the instance is model and not make
    virtual void print();
    virtual ~Make();
  private:
    std::string make;
};
#endif
