using namespace std;
#include <iostream>

int main(void){
//declare struct
  struct Food{
    string name;
    int calories;
    bool isVegetarian;
    int minstocook;
  };

  int i = 0;
  //intialize struct variable
  Food userfood;
  cout << "\nWhat is the name of the food? : ";
  cin >> userfood.name;
  cout << "\nHow many calories are in the dish? : ";
  cin >> userfood.calories;
  cout << "\nIs the dish Vegetarian?(Y/N) :  ";
  char veganswer;
  cin >> veganswer;
  if(veganswer == 'Y')
    userfood.isVegetarian = 1;
  else
    userfood.isVegetarian = 0;

  cout << "How many minutes does it take to cook the dish? : ";
  cin >> userfood.minstocook;
//SHow results of user input 
  cout << "\nSo the " << userfood.name <<" has " <<userfood.calories
  << " calories, ";
  if (userfood.isVegetarian)
    cout << "is Vegetarian";
  else
    cout <<"is not Vegetarian";
  cout << " and takes " << userfood.minstocook << " minutes to cook.";

  return 0;
}
