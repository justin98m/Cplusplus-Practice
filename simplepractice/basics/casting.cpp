using namespace std;
#include <iostream>

int main(void){

  int child1Age = 3, child2Age = 8;

  double avgAge;
  avgAge = (child1Age + child2Age)/2;
  cout << "\navgAge with out casting: " << avgAge;
  avgAge = double((child1Age + child2Age))/2;
  cout << "\navgAge with casting: " << avgAge << endl;


  return 0;
}
