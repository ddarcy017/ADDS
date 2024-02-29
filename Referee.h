#include "Player.h"
#ifndef REFEREE_H
#define REFEREE_H

class Referee : public Player{
public:
Referee( ); // constructor
Player * refGame(Player * player1, Player * player2);
// returns the reference to the winning player   
};
#endif

