#include <iostream>
#include <string>
#include "user.h"
#ifndef ARTIST_H
#define ARTIST_H

class Artist : public User{
  public:
    Artist();
    Artist(double plays, int newid);
    double getstreams();
    bool operator==(const Artist& creator2);



  private:
    double streams;
    std::string stageName;
};


#endif
