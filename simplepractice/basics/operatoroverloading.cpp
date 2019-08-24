#include <iostream>
using namespace std;
//declare class
class automobile{
  public:
    automobile();
    automobile(int miles);
    //compare current class value to another class
    bool operator==(const automobile& car2);
  private:
    int mileage;

};
automobile::automobile(){
  mileage = 12;
}
automobile::automobile(int miles){
  mileage = miles;
}
//comparing the mileage determines equality
bool automobile::operator==(const automobile& car2){
  cout <<"\nPrinting out values to comfirm equality: " << mileage << " " << car2.mileage << endl;
  if(mileage == car2.mileage)
    return true;
  else
    return false;
}
int main(void){
  automobile camry(7);
  automobile carolla;
  //current class is camry, carolla is classed passed by reference
  if(camry == carolla)
    cout << "\nEqual Values";
  else
    cout << "\n unequal values";
  return 0;
}
