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
	Combat();
}

void Game::CreateCharacter()
{
	int choice = 0;

	cout << "Creation de votre personnage" << endl;
	cout << "Choississez un nom" << endl;
	cin >> playerName;
	cout << "Votre nom est :" << playerName << endl;

	cout << "Choississez une classe : 1. Guerrier 2. Mage" << endl;
	cin >> choice;
	
	// Si on choisi Guerrier
	if (choice == 1) {
		cout << "vous avez choisi guerrier" << endl;
		classe = "Guerrier";

		Warrior hero(playerName, 100, 50);
		player = hero;

	}// Si on choisi Mage
	else if (choice == 2) {
		cout << "Vous avez choisi mage" << endl;
		classe = "Mage";

		Mage hero2(playerName, 100, 50);
		player = hero2;
	}// Sinon
	else 
	{
		while (choice != 1 | choice != 2)
		{
			cout << " Erreur ! Choississez une classe : 1. Guerrier 2. Mage" << endl;
			cin >> choice;
		}
	}

	cout << "votre personnage s'appelle " << playerName << " et c'est un " << classe << endl;
}



void Game::Combat()
{
	int choice;
	Monster monster1("Gnome", 150, 10);

	cout << "Attention un " << monster1.name << " apparait !!!!" << endl;
	
	// Tant que monster1 est en vie
	while (monster1.isAlive == true) 
	{

			cout << "Voulez vous : 1. Attaquer ou 2. Fuir" << endl;
			cin >> choice;

		// Si on attaque
		if (choice == 1) {
			cout << "Vous attaquez " << monster1.name << " pour lui infliger " << player.damage << " points de degat" << endl;
			player.Attack(monster1);
			

		}// Si on fuit
		else if (choice == 2) {
			cout << "Vous choississez de fuir... Lache..." << endl;
			break;
		}// Sinon
		else
		{
				cout << "Erreur ! 1.Attaquer 2.Sort" << endl;
				cin >> choice;
				
		}
	 }

}
