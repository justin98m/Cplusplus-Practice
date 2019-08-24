#include "model.h"
using namespace std;

void Model::print(){
  cout << "\nModel of car: " << model << endl;
}
Model::Model(){
  Make();
  model = "Camry";
}
Model::~Model(){}

void Model::changeModel(string newmodel){
  model = newmodel;
}
