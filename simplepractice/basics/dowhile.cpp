using namespace std;
#include <iostream>
#include <string>
int main(void){

  string something;
  do {
    cout <<"\nTell me something:  ";
    cin >> something;
  } while (something != "something");
  cout << "\n Thank You!! \n";
  return 0;
}
