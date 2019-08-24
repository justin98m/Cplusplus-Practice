using namespace std;
#include <iostream>

int main(void){

  typedef double measurement;
  //all the measurements are now set as doubles
  measurement area, perimeter, volume;
  measurement height, length, width;

  cout << "\n Give dimensions of rectangular prism";
  cout << "\n Height : ";
  cin >> height;
  cout << "\nLength : ";
  cin >> length;
  cout << "\n width: ";
  cin >> width;

  area = 2*(width*length + height*length + height*width);
  perimeter = 2*length + 2*width;
  volume = length * width * height;

  cout << "\n Area: " << area << "\n Perimeter: " << perimeter
  << "\nvolume: " << volume << endl;


  return 0;
}
