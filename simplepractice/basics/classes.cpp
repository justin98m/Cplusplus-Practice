using namespace std;
#include <iostream>
#include <cstdlib>


class Artist{
public:
  //default constructor
  Artist();
  Artist(string name, string city, string genre,
    int spotlisteners, bool Raps = false);
  string getName() const; //get the rappers's names
  string getCity() const; //get the rapper's city
  int getSpotlisteners() const; //get spotify listener count
  string getGenre() const; //get the artist's primary Genre
  bool isRapper() ; //Is the artist a rapper
  void ListData() ;

private:
  string name;
  string city;
  string genre;
  int spotlisteners;
  bool Raps;

};
Artist::Artist(){
  name = "Unknown";
  city = "Unknown";
  genre = "Unknown";
  spotlisteners = 0;
  Raps = false;
}
Artist::Artist(string nm, string origin, string musicGenre, int listeners, bool Rapper){
    name = nm;
    city = origin;
    genre = musicGenre;
    spotlisteners = listeners;
    Raps = Rapper;
  }
string Artist::getName() const{
  return name;
}
string Artist::getCity() const{
  return city;
}
string Artist::getGenre() const{
  return genre;
}
int Artist::getSpotlisteners() const{
  return spotlisteners;
}
//determines if the artist is a rapper based on their genre of music
bool Artist::isRapper(){
  //if 0 is thrown then the artis is a rapper
  if(!getGenre().compare("rap")){
    return true;
  }
  else
    return false;
}
void Artist::ListData() {
  cout << "\n\nArtst Name: " << getName()
  << "\nArtist Genre: "<< getGenre() << "\nHome City: "
  << getCity() << "\nNumber of listeners: " << getSpotlisteners()
  << "\nDoes the artist rap? ";

 if(isRapper())
    cout << "yes\n";
  else
    cout << "no\n";

}

int main(void){

Artist Frank("Frank Ocean", "New Orleans", "Unknown", 8336566);
Frank.ListData();

}
