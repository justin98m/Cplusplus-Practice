
/* This program uses dynamic allocation to allocate memory for an array of the user's desire
the program takes in the array and sorts the array using insertion sort*/
#include <iostream>
using namespace std;

//takes array input from user
void inputArray(int size);
//sorts users array
void insertionSort(int* A, int size);
//displays array on the console
void printarray(int* A, int size);
//deallocates memory allocated for the user's array
void deallocate(int* A);

int main(void){
  int size;

  cout << "\nEnter the size of the array: ";
  cin >> size;
  inputArray(size);
}
void inputArray(int size){
  //only A is the pointer
  int* A,  i;
  //allocate memory for array based on inputed size
  A = new int [size];
  cout << "\n Numbers can be seperated by spaces or lines enter as many as you sized" <<
   "\nEnter numbers in any order: ";
   //read in the user array data
  for (i = 0; i < size; i++) {
    cin >> A[i];
  }
  printarray(A,size);
  insertionSort(A,size);
  //delete the allocated memory
  deallocate(A);
}
void insertionSort(int* A, int size){

  int i,j, currentVal;

  for(i = 1; i < size; i++){
    //set the current val to the closest val outside the subarray
    currentVal = A[i];
    //start at the end of the subarray and compare values to current
    for(j = i-1; j >= 0 and A[j] > currentVal; j--){
      //if the currentvalue in the subarray is larger than current val move to the right
      //to make space for currentval to go behind it
      A[j+ 1] = A[j];

    }
    //Set current val to the open spot made for it
    A[j+1] = currentVal;
  }
}
void printarray(int* A, int size){
  cout <<"\n Sorted array: ";
  int i;
  for(i = 0; i < size; i++){
    cout << A[i] << ",";
  }
  cout << endl;
}
void deallocate(int* A){
  delete[] A;
}
