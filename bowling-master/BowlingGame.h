#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>

class BowlingGame
{
public:
   BowlingGame() {}
   ~BowlingGame() {}
   void roll(int pins)
   {
       score+=pins;
   }
   
   int getScore()
   {
       return score;
   }
private:
   int score;
};

#endif
