#include "singlyLinkedList.h"
using namespace std;
/*This program implements singly linked list. it invovles two clases a node clase
and a linked list class which holds the node head of the list. in main the user
can add and delete nodes from the list, check if the list is empty, print the list or just
quit the program */
  return 0;
}
int main(void){
  Linkedlist list;
  cout << "Possible Inputs: \n "
        <<"A: Add a front node\n"
        <<"D: Delete front node\n"
        <<"E: Check if list is empty\n"
        <<"P: Print the entire list\n"
        << "Q: quit the prgram\n";
  char input = 'A';
  int value;

  while(input != 'Q'){
    cin >> input;
    switch (input) {
      case 'A': cout << "\nEnter elem value: ";
                cin >> value;
                list.addFront(value);
                break;
      case 'D': cout << "\nFront node deleted";
                list.removeFront();
                break;
      case 'E': if(list.isEmpty())
                  cout << "\n list is empty ";
                else
                  cout << "\nlist is not empty";
                break;
      case 'P': list.printList();

    }
  }
}
