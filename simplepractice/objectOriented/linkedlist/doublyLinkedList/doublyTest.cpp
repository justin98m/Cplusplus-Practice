#include "doubly.h"
#include <cstring>
using namespace std;

int main(void){
  LinkedList list;

  char input = 'A';
  int value;

  while(input != 'q'){
    cout << "Possible Inputs: \n "
          <<"f: Add a front node\n"
          <<"d: Delete front node\n"
          <<"b: add node to back\n"
          <<"z: delete tail node\n"
          <<"e: Check if list is empty\n"
          <<"p: Print the entire list\n"
          <<"h: get the header \n"
          << "t: get the Tail\n"
          << "q: quit the prgram\n";
    cin >> input;
    switch (input) {
      case 'f': cout << "\nEnter new front node element: ";
                cin >> value;
                list.addFront(value);
                break;
      case 'd': cout << "\nFront node deleted";
                list.removeFront();
                break;
      case 'b': cout << "\n Enter new tail node element: ";
                cin >> value;
                list.addBack(value);
                break;
      case 'z': cout << "\n Tail deleted";
                list.removeBack();
                break;
      case 'e': if(list.isEmpty())
                  cout << "\n list is empty ";
                else
                  cout << "\nlist is not empty";
                break;
      case 'p': list.printList();
                break;
      case 'h': cout << "Header: " << list.getFront() << endl;
                break;
      case 't': cout << "Tail: " << list.getBack() << endl;


    }
  }
}
