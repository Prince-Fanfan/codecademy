#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 3, "New York", "USA", "he/him");
  sam.add_hobby("watching TV");
  sam.add_hobby("playing computer games");
  std::cout << sam.view_profile();
}