#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector <char> incorrect = {};
  bool guess = false;
  char letter;

  greet();

  while(answer != codeword and misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout  << "\n\nPlease  enter your guess: ";
    std::cin >> letter;
    for(int k = 0; k < codeword.size(); k++)
    {
      if(letter == codeword[k])
      {
        answer[k] = letter;
        guess = true;
      }
    }
    if(guess)
    {
      std::cout << "\nCorrect!\n";
    }
    else
    {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  end_game(answer, codeword);

}
