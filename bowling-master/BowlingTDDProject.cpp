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

	BOOST_AUTO_TEST_CASE(testcase)
	{
	}

	BOOST_AUTO_TEST_SUITE_END()
}

