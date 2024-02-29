#include<iostream>
#include<string>
#ifndef PLAYER_H
#define PLAYER_H

class Player{
protected:
char move;
std::string name;
public:
Player();
Player(char move, std::string name);
virtual char makeMove( );
virtual std::string getName( );    
};
#endif