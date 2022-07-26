#include <iostream>
#include <vector>
#include <cstdlib>
#include "ttt_functions.hpp"

int main()
{ 
  srand(time(NULL));
  // Who first turn X or O, if random number equal to 0 first turn is "O", else first turn is "X"
  int x_or_o = rand() % 2;
  int attempts = 0, pos;
  bool is_end = false;
  char turn = ' ';
  std::vector <char> row1 = {'1', '2', '3'}, row2 = {'4','5', '6'}, row3 = {'7', '8', '9'};

  if(x_or_o == 0){
      turn = 'O';
  } else if(x_or_o == 1){
    turn = 'X';
  }
  std::cout << "The first turn computer accidentally detects!\n";
  display_table(row1, row2, row3);

  while(attempts < 9 and not is_end)
  {
    std::cout << turn << "'s turn: ";
    std::cin >> pos;
    if(pos <= 3) {
       row1[pos-1] = turn;
    } else if(pos <= 6) {
       row2[pos-4] = turn;
    } else if(pos <= 9) {
       row3[pos-7] = turn;
    }
    display_table(row1, row2, row3);
    is_end = check_win(row1, row2, row3);
    turn = change_turn(turn);
    attempts++;
  }

  if(is_end){
    turn = change_turn(turn);
    std::cout << turn << " is win!\n";
  } else if(attempts == 9){
    std::cout << "Unfortunately Draw\n";
  }

}