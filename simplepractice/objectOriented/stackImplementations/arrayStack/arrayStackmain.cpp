//also need to add a deconstructor1
#include "stack.h"
using namespace std;
void directions(){
  cout << "\nEnter the following values for the correlating actions\n\t 1: View Top of the stack \n\t 2: Show the stack size \n\t 3: Check if stack is empty\n\t 4: Push a integer to the stack\n\t 5: Pop the top element\n\t 6: quit the program\n";
}
int main(void){

  int size, input;
  cout << "\nEnter Stack size: ";
  cin >> size;
  Stack s(size);
  bool finish = false;
    directions();
  while(!finish){

    cin >> input;
    cout << endl;
    switch(input){
      case 1: cout << "top of stack: " << s.top() << endl;
              break;
      case 2: cout << "Size of stack: " << s.size();
              break;
      case 3: if(s.isEmpty())
        cout << "\n Stack is empty";
      else
        cout << "\nStack is not empty";
        break;
      case 4: cout << "\nEnter the int to add to the stack: ";
              cin >> input;
              s.push(input);
              break;
      case 5: cout << "Top element popped";
              s.pop();
              break;
      case 6: finish = true;
        }
      }

}
