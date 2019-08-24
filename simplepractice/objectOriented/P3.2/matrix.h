#include <iostream>

class Matrix{
  public:
    Matrix(int val);
    void print()const;
    void operator+(Matrix& matrix2);
    void operator*(Matrix& matrix2);
  private:
    int M[10][10];
};
