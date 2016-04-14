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
       ++RollCount;
   }
   
   int getScore()
   {
       return score;
   }
   bool isSpare()
   {
        if(RollCount==2)
            if (getScore()>=10)
	 {
	   spare++;
	   return true;
	 }
   }
   bool isStrike()
   {
     if(RollCount==1)
       if (getScore()>=10)
	 {
	   strike++;
	   return true;
	 }
   }
private:
   int score;
   int strike;
   int spare;
   int RollCount;
};

#endif
