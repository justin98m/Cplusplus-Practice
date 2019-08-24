using namespace std;
#include <iostream>

int main(void){


int p = 7;
//set j to p's address
int* j = &p;

cout << "\nThe value of p is : " << p;
cout << "\nThe address of p is: " << j;
//print out p's value by derefrencing p's address
cout << "\nUsing a point to display p's value : " << *j;

return 0;
}
