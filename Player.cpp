#include "Player.h"
using namespace std;
#include <string>

Player::Player(): move(' '), name(" ") {};
Player::Player(char move, string name){
    this->move = move;
    this->name = name; 
};

char Player::makeMove() {return move;}
string Player::getName() {return name;} 
  