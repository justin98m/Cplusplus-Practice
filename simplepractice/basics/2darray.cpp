#include <iostream>
#include <vector>
using namespace std;
/* Program takes user input for the number of rows and columns they want in a Matrix
the program then dynamically allocates storage for the matriz and fills each row
with its correspoding array position, also does the same approach with vectors*/
void generateArray(int rows, int col);
void fillMatrix(int** Matrix, int rows, int col);
void vectorMatrix(int rows, int col);
int main(void){
  int rows, col;
  cout << "\nRows: " << endl;
  cin >> rows;
  cout << "\nColumns: " << endl;
  cin >> col;
  //generateArray(rows,col);
  vectorMatrix(rows,col);

}
void generateArray(int rows, int col){
  int i;
  //declare a array of pointers with the number of rows
  int** Matrix = new int*[rows];
  //create an array within each array pointer to create the 2d array
  for(i = 0; i < rows; i++){
    Matrix[i] = new int[col];
  }
  fillMatrix(Matrix, rows, col);
}
//prints the array on console and fills each row with it's array position value
void fillMatrix(int** Matrix, int rows, int col){
  cout << "Your Matrix : ";
  int i,j;
  for(i = 0; i < rows; i++){
    cout << endl << "Row " << i << ": ";
    for(j =0; j < col; j++){
      Matrix[i][j] = i;
      cout << Matrix[i][j] << " ";
    }
  }
}
void vectorMatrix(int rows, int col){
  //declare a vector that holds vectors
  //constructor makes the rows value of vectors
  //the vector<int> is filled in each row and col is the size of the second vector
  vector < vector<int> > Matrix(rows, vector<int>(col));
  int i,j;
  for(i = 0; i < rows; i++){
    cout << endl << "Row " << i << ": ";
    for(j =0; j < col; j++){
      Matrix[i][j] = i;
      cout << Matrix[i][j] << " ";
    }
  }
}
