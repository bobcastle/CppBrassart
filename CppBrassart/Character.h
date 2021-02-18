#pragma once
#include <iostream>
using namespace std;

class Character
{

public :

	string name;
	int life;
	int maxlife ;
	int damage;
	int mana;
	bool isAlive = true;

public :

	void ReceiveDamage(int nbDamage);
	void Attack(Character &cible);
	void Death();
	void printStats();
	Character(string pName, int pLife, int pDamage);
	Character();


};

