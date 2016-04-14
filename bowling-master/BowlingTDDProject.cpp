// BowlingTDDProject.cpp : Defines the entry point for the console application.
//
#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>
#include "BowlingGame.h"

namespace
{
	BOOST_AUTO_TEST_SUITE(BowlingGameTests)

	BOOST_AUTO_TEST_CASE(After20RollsWith0PinsScoreShouldBe0)
	{
	  BowlingGame game;
	  
	  for(int i= 0; i <20; ++i)
	    {
	      game.roll(0);
	    }
	  
	  BOOST_CHECK_EQUAL(game.getScore(), 0);
	}
	BOOST_AUTO_TEST_CASE(After20RollsWith5PinsScoreShouldBe100)
	{
	  BowlingGame game;
	  
	  for(int i= 0; i <20; ++i)
	    {
	      game.roll(5);
	    }
	  
	  BOOST_CHECK_EQUAL(game.getScore(), 100);
	}
	BOOST_AUTO_TEST_CASE(After2RollsWithSpareScoreShouldBe10PlusRandom5)
	{
	  BowlingGame game;
	  
	  for(int i= 0; i <2; ++i)
	    {
	      game.roll(5);
	    }
	  if(game.isSpare())
	    {
	      game.roll(5);
	    }
	  BOOST_CHECK_EQUAL(game.getScore(), 15);
	}
  	BOOST_AUTO_TEST_CASE(AfterRollWithStrikeScoreShouldBe10PlusRandom5)
	{
	  BowlingGame game;
	  
	  game.roll(10);
	  if(game.isStrike())
	    {
	      game.roll(5);
	    }
	  BOOST_CHECK_EQUAL(game.getScore(), 15);
	}

  BOOST_AUTO_TEST_SUITE_END()
}

