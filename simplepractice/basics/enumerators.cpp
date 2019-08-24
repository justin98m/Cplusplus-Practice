//enumerators are used to associate values with numbers for better readability
//The actual functionlity is not significant
using namespace std;
#include <iostream>
#include <iomanip>

int main(void){
  //defaults f to 0 , d to 1 etc
  enum grades {F,D,C,B,A};
  int i;
  double gpa = 0;
  grades studentGrades[4];
  studentGrades[0] = D;
  studentGrades[1] = B;
  studentGrades[2] = A;
  studentGrades[3] = D;

  for(i = 0; i < 4; i++){
    cout << "\ngpa befor addition: " << gpa;
    gpa += studentGrades[i];
    cout << "\ngpa after addition: " << gpa;
  }



  gpa = gpa/4;

  cout << "\nYour Gpa: " << setprecision(3) << gpa << endl;

}
