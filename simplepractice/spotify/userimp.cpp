
//Problem rn is the code in the constructor just isnt running
//class implementation
#include "user.h"
using namespace std;

User::User(){

  //Reads from files
  ifstream readidFile("User_IDs.txt");
  string = placeholder;


  //default to 100 for the instance of no users yet
  int lastid = 100;
  //get the most recent created ID out the ID file
  if(readidFile.is_open()){
    while (!readidFile.eof()) {


       lastid;
    }
  }

  cout << "last : " << lastid << endl;
  id = lastid + 1;
  cout << "Current Id : " << id << endl;
  readidFile.close();

  //writes to file
  ofstream writeidFile;
  writeidFile.open("User_IDs.txt", ofstream::out | ofstream::app);
  writeidFile << id << endl;

  writeidFile.close();
  name = username;
  email = useremail;
  password = userpassword;

}
/*User::User(int userId){
  id = userId;
  getid();
}
void User::getid() const{
  cout << "\nUser Id: " << id << endl;
}*/
