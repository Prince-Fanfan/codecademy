#include <vector>

// this function change players turn 'X' or 'O'
char change_turn(char turn);

// this function print current gameboard
void display_table(std::vector <char> row1, std::vector <char> row2, std::vector <char> row3);

// this function check winner after last attempt
bool check_win(std::vector <char> row1, std::vector <char> row2, std::vector <char> row3);