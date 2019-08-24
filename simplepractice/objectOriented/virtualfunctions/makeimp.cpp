#include "Make.h"
using namespace std;

void Make::print(){
  cout << "\nMake of car: " << make << endl;
}
Make::Make(){
  make = "Toyota";
}
Make::~Make(){}
