#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string iname, int iage, std::string icity, std::string icountry, std::string ipronouns){
  name = iname;
  age = iage;
  city = icity;
  country = icountry;
  pronouns = ipronouns;
}

std::string Profile::view_profile(){
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  bio += "\nHobbies:\n";
  for(int i = 0; i < hobbies.size(); i++){
    bio += " - " + hobbies[i] + "\n";
  }

  return bio;
}

void Profile::add_hobby(std::string ihobby){
  hobbies.push_back(ihobby);
}