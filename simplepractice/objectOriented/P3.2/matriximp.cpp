using namespace std;
#include "matrix.h"
Matrix::Matrix(int val){
  int i,count;
  for ( i = 0; i < 10; i++) {
    for(count = 0; count < 10; count++){
      M[i][count] = val;
    }
  }
}
void Matrix::print()const{
  int i,count;
  for ( i = 0; i < 10; i++) {
      cout << endl;
    for(count = 0; count < 10; count++){
      cout << M[i][count] << " | ";
    }
  }
}
 void Matrix::operator+(Matrix& matrix2){
  int i,count;
  for ( i = 0; i < 10; i++) {
    for(count = 0; count < 10; count++){
      M[i][count] += matrix2.M[i][count];
    }
  }

}
void Matrix::operator*(Matrix& matrix2){
 int i,count;
 for ( i = 0; i < 10; i++) {
   for(count = 0; count < 10; count++){
     M[i][count] *= matrix2.M[i][count];
   }
 }

}
