/* The stack library include from the stdlib libray comes with its own function
and has most of the functionality of a stack completed. It be worth while
to look at how the library implements each function */

#include <iostream>
#include <stack>
using namespace std;
using std::stack;
void printstack(stack<int> s){
  cout << "\nHere is your stack: ";
  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
}
int main(void){
  stack<int> myStack;
  bool done = false;
  int value;
  cout << "\n Input integers into the stack, enter '-1' when your finished : ";
  while(!done){
    cin >>value;
    if (value == -1){
      done = true;
    }
    else {
      myStack.push(value);
    }
  }
  printstack(myStack);


}
