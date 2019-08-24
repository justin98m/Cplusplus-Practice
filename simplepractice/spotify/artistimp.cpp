#include "artist.h"

using namespace std;

Artist::Artist(){
  User();
  streams = 0;
}
Artist::Artist(double plays, int newid){
  User();
  streams = plays;
}
double Artist::getstreams(){
  return streams;
}
bool Artist::operator==(const Artist& creator2){
  if (id == creator2.id)
    return true;
  else
    return false;
  }
