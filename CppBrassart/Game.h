#pragma once
#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "Character.h"

using namespace std;

class Game
{
	public :
		string playerName;
		string classe;
		Character player;

	public :
		void CreateGame();
		void CreateCharacter();
		void Combat();

};

