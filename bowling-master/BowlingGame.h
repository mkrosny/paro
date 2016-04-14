#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>
#include <cstdlib>
#include <ctime>

class BowlingGame
{
public:
   BowlingGame() {
     srand (time(NULL));
   }
   ~BowlingGame() {}

   void game(int p1,p2)
   {
       score+=pins;
       ++RollCount;
   }
      
   void round()
   {
     score+=roll();
     if(isStrike) {
       strike=true;
       score+=roll();
     }

     if(isSpare)
       {
       spare=true;
       score+=roll();
       }
     

     ++RoundCount;
       
     scores[RoundCount]=score;
       
     score=0;
     strike=false;
     spare=false;
   }

   int roll()
   {
       return rand() % 10 + 1;
   }
   
   int getScore()
   {
       return score;
   }

   
   bool isSpare()
   {
     if (getScore()>=10)
	 {
	   spare=true;
	   return true;
	 }
     return false;
   }
   bool isStrike()
   {
       if (getScore()>=10)
	 {
	   strike++;
	   return true;
	 }
       return false;
   }
   
private:
   int scores[10];
   bool strike;
   bool spare;
   int score;

   int RollCount;
   int RoundCount;
};

#endif
