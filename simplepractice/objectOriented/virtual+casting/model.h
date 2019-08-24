#include <iostream>
#include <cstring>
#include "Make.h"
#ifndef MODEL_H
#define MODEL_H

class Model: public Make{
  public:
    Model();
    void changeModel(std::string newmodel);
//incase a instance needs to be deleted
    ~Model();
    virtual void print();
  private:
    std::string model;
};
#endif
