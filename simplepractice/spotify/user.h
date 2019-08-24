#include <iostream>
#include <cstring>
#include <fstream>

//if user.h is called in another file we dont want to call it again
#ifndef USER_H
#define USER_H

class User{
public:
  //User creates the user_Id which are autoincremented after 100
  User(username, useremail, userpassword);

  //const ensure id isnt changed
  /*void getId() const;
  void getName() const;
  void getEmail() const;
  void updateName(newName);
  void updateEmail(newEmail);
  voud updatePassword(newPassword) */
protected:
  //making this protected doesnt make sense since getid exist
  //this is protected just to practice inheritance
  int id;
  std::string name, email, password;


};
#endif
