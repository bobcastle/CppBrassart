#include <iostream>
#include "Character.h"
#include "Mage.h"
#include "Warrior.h"
#include "Game.h"

using namespace std;

int main() 
{
	// Game loop
	Game newGame;
	newGame.CreateGame();

	// Empeche la fermeture de la console
	getchar();
	
	return 0;
}