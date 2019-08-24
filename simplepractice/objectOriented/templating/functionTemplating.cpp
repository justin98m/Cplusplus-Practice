#include <iostream>
#include <cstring>
using namespace std;
/* Templating is used when a function could possible take a variety of different
types of variables and prevents creating multiple functions that do the same thing
with just different variable types*/

template <typename T>
 void genericAddition(T var1, T var2){
  cout << endl << var1 <<  " +  " << var2 << " = " << var1 + var2;
}

int main(void){
  int a = 1, b =3;
  float c =2.34 , d = 4.68;
  double e = 2930.3243432 , f = 398.2342;
  string g = "Justin ", h = "Cameron";

  genericAddition(a,b);
  genericAddition(c,d);
  genericAddition(e,f);
  genericAddition(g,h);


}
