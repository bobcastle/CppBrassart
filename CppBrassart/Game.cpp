#include "Game.h"
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Monster.h"
#include <iostream>

using namespace std;

void Game::CreateGame()
{
	CreateCharacter();
	
}

void Game::CreateCharacter()
{
	int choice = 0;

	cout << "Création de votre personnage" << endl;
	cout << "Choississez un nom" << endl;
	cin >> playerName;
	cout << "your name is :" << playerName << endl;

	cout << "Choississez une classe : 1.Guerrier 2.Mage" << endl;
	cin >> choice;
	
	
	if (choice == 1) {
		cout << "vous avez choisi guerrier" << endl;
		classe = "Guerrier";

		Warrior hero(playerName, 100, 50);
		player = hero;

	}
	else if (choice == 2) {
		cout << "vous avez choisi mage" << endl;
		classe = "Mage";

		Mage hero2(playerName, 100, 50);
		//player = hero2;
	}
	else {
		while (choice != 1 | choice != 2)
		{
			cout << " erreur ! Choississez une classe : 1.Guerrier 2.Mage" << endl;
			cin >> choice;
		}
	}



	cout << "votre personnage s'appelle " << playerName << " et c'est un " << classe << endl;

	
	
}



void Game::Combat()
{
	int choice;
	Monster monster1("Gnome", 150, 10);
	

	while (monster1.isAlive == true) 
	{

			cout << "1.Attaquer 2.Sort" << endl;
			cin >> choice;

		if (choice == 1) {
			player.Attack(monster1);

		}
		else if (choice == 2) {
			
		}
		else 
		{
				cout << " erreur ! 1.Attaquer 2.Sort" << endl;
				cin >> choice;
				
		}
	 }

}
