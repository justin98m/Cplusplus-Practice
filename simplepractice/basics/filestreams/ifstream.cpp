using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(void){

  ifstream file;
  string line, filename;
  cout << "Enter the file name you want me to read: ";
  cin >> filename;
  file.open(filename);

  if(file.is_open()){
      cout << "File contents: ";
      while (getline(file,line)) {
        cout << line << endl;
      }

  }
  else
    cout << "File does not exist!";

  file.close();
}
