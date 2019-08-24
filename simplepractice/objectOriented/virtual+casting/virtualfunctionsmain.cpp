#include "model.h"
using namespace std;
/*Virtual functions are used when two classes that have a child and parent relationship
have a same function name and if in a  pointer is declared as the parent but points
to the child. To ensure the child function is called and not the declared parent
virtual functions are used*/

int main(void){

  //array of two make pointers
  Make* cc[2];
  //declared as a make
  cc[0] = new Make;
  //declared as model still that contains a Make
  cc[1] = new Model;

  //should print the Make
  cc[0]->print();
  //should print the Model
  cc[1]->print();


  return 0;
}
