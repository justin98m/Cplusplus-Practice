#include "model.h"
using namespace std;
/*dynamic casting is used when we have a polymorphic array, we point to a child class
and we want to call a function from the child class that is not present in the
parent class. Since there is no virtula funtion for said function we must cast the
individual array partition as the child class or the compiler will try to call
a function from the parent(in our case Make) that doesnt exist*/
int main(void){

  //array of two make pointers
  Make* cc[2];
  //declared as a make
  cc[0] = new Make;
  //declared as model still that contains a Make
  cc[1] = new Model;

  //should print the Model
  cc[1]->print();
  //cast cc[1] as a model class so a model class function that isnt in make can run
  Model* md = dynamic_cast<Model*>(cc[1]);
  cout << "Model update after casting : "
  md->changeModel("Corolla");
  cc[1]->print();


  return 0;
}
