#include <iostream>
#include <vector>

// this function change players turn 'X' or 'O'
char change_turn(char turn) {
  if(turn == 'O') {
    return 'X';
  } else {
    return 'O';
  }
}

// this function print current gameboard
void display_table(std::vector <char> row1, std::vector <char> row2, std::vector <char> row3){
  std::cout << "\n";
  for(int i = 0; i < row1.size(); i++){
    std::cout << row1[i] << " ";
  }
  std::cout << "\n";
  for(int j = 0; j < row2.size(); j++){
    std::cout << row2[j] << " ";
  }
  std::cout << "\n";
  for(int k = 0; k < row3.size(); k++){
    std::cout << row3[k] << " ";
  }
  std::cout << "\n\n";
}

// this function check winner after last attempt
bool check_win(std::vector <char> row1, std::vector <char> row2, std::vector <char> row3){
  if(row1[0] == row1[1] and row1[1] == row1[2]){
    return true;
  } else if(row2[0] == row2[1] and row2[1] == row2[2]){
    return true;
  } else if(row3[0] == row3[1] and row3[1] == row3[2]){
    return true;
  } else if(row1[0] == row2[0] and row2[0] == row3[0]){
    return true;
  } else if(row1[1] == row2[1] and row2[1] == row3[1]){
    return true;
  } else if(row1[2] == row2[2] and row2[2] == row3[2]){
    return true;
  } else if(row1[0] == row2[1] and row2[1] == row3[2]){
    return true;
  } else if(row1[2] == row2[1] and row2[1] == row3[0]){
    return true;
  } else {
    return false;
  }
}