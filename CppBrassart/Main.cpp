#include <iostream>
#include "Character.h"
#include "Mage.h"
#include "Warrior.h"
#include "Game.h"

using namespace std;

int main() 
{
	
	//Character goku("Goku", 100, 50, true);
	//Character vegeta("Vegeta", 100, 50, true);
	//Mage mage1("merlin", 100, 50, true);
	//Warrior war1("garen", 100, 50, true);
	//war1.Spin(mage1);
	//goku.Attack(vegeta);
	//vegeta.printStats();

	Game newGame;
	newGame.CreateCharacter();
	newGame.Combat();

	getchar();
	
	return 0;

}