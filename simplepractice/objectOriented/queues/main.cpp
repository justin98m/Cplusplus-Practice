#include "arrayqueue.h"
#include <cstring>
using namespace std;
void directions(){
  cout << "\nEnter the following values for the correlating actions\n\t 1: View Front of the Queue \n\t 2: Show the Queue size \n\t 3: Check if Queue is empty\n\t 4: Push a integer to the Front\n\t 5: Pop the Front element\n\t 6: Print the queue\n\t 7: Quit the program\n" ;
}
int main(void){

  int size, input;
  string element;
  cout << "\nEnter Queue capacity: ";
  cin >> size;
  Queue q(size);
  bool finish = false;
    directions();
  while(!finish){

    cin >> input;
    cout << endl;
    switch(input){
      case 1: cout << "Front of Queue " << q.front() << endl;
              break;
      case 2: cout << "Size of Queue: " << q.size();
              break;
      case 3: if(q.empty())
        cout << "\n Queue is empty";
      else
        cout << "\nQueue is not empty";
        break;
      case 4: cout << "\nEnter the string to add to the Queue: ";
              cin >> element;
              q.Enqueue(element);
              break;
      case 5: cout << "Front element Dequeued";
              q.Dequeue();
              break;
      case 6: q.printQueue();
      case 7: finish = true;
        }
      }

}
