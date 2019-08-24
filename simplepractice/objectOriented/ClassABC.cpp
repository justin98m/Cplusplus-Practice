/*Write a program that consists of three classes, A, B, and C, such that B is a
subclass of A and C is a subclass of B. Each class should define a member
variable named “x” (that is, each has its own variable named x). Describe
a way for a member function in C to access and set A’s version of x to a
given value, without changing B or C’s version.*/

//I couldnt figure this one out L
#include <iostream>
using namespace std;

class A{
      A(int val);
      void printA()const ;
  private: int x;
  friend class B;
  friend class C;

};
class B : public A{
  public:
    B(int val);
    void printB()const;
    void changeAfromB(int val);
  int x;
};
class C : public B{
  public:
    C(int val);
    void printC()const;
    void changeAfromC(int val);
  private:
  int x;
};
A::A(int val){
  x = val;
}
B::B(int val){
  A(val+1);
  x = val;

}
C::C(int val){
  x = val;
  //used to differentiate values
  B(val+1);
}
void C::changeAfromC(int val){
  changeAfromB(val);
}
void B::changeAfromB(int val){
  x = val;
}
void A::printA()const{
  cout << "\nA: "<< x;
 }
void B::printB()const{
  cout << "\nB: " << x;
}
void C::printC()const{
  cout << "\nC: "<< x;
}
int main(void){
  C foo(10);
  foo.printA();
  foo.printB();
  foo.printC();




  return 0;
}
