using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main (){
  ofstream myfile;
  //must be char to be read in a  command
  string filename, newline;
  string filecontents;
  //get the file name and open the file
  cout << "What's the file called?" << endl << "File name: ";
  cin >> filename;
  //get line will read this as input if not put before it
  cout << endl;
  myfile.open(filename);
  //write input into file
  cout <<"Input what you want in the file: ";
  //read the newlin char so input is read into filecontents
  getline(cin,newline);
  getline(cin,filecontents);
  myfile << filecontents;

  //open the file via a terminal command
  //put command in a string
  string fullcomand = "atom " + filename;
  //set the command to a pointer to char array (which is a string)
  const char *openfilecommand = fullcomand.c_str();
  cout << "\nHere is your file: ";

  system(openfilecommand);

  myfile.close();

}
