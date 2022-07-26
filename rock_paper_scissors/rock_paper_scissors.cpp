/*This program describe rock, paper, scissors game*/
#include <iostream>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot!\n";
  std::cin >> user;
  
  std::string computer_g;
  switch(computer){
    case 1:
      computer_g = "✊";
      break;
    case 2:
      computer_g = "✋";
      break;
    case 3:
      computer_g = "✌️";
      break;
    default:
      computer_g = "-";
  }

  std::string user_g;
  switch(user){
    case 1:
      user_g = "✊";
      break;
    case 2:
      user_g = "✋";
      break;
    case 3:
      user_g = "✌️";
      break;
    default:
      user_g = "-";
  }

  std::cout << "Your choice: " << user_g << "\n";
  std::cout << "Computer choice: " << computer_g << "\n";
  if(user == computer){
    std::cout << "Draw!";
  }
  else {
  if(user == 1){
    if(computer == 2){ std::cout << "You lost!"; }
    else{ std::cout << "You win!"; }
  }
  else if(user == 2){
    if(computer == 3){ std::cout << "You lost!"; }
    else{ std::cout << "You win!"; }
  }
  else if(user == 3){
    if(computer == 1){ std::cout << "You lost!"; }
    else{ std::cout << "You win!"; }
  }
  else{
    std::cout << "Invalid iput!";
  }
  }
}
