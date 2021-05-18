#pragma once
//======================================================================================
//Header file for bots: initially cBotRandom is defined here, but other bot classes
//can go here too
//
//(c) Patrick Dickinson, University of Lincoln, School of Computer Science, 2020
//======================================================================================

#include "botbase.h"


class cDjikstra : public cBotBase
{
	virtual void ChooseNextGridPosition();
	virtual void Buid( cBotBase &bot);

};


