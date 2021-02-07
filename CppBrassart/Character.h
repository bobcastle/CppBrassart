#pragma once
#include <iostream>
using namespace std;

class Character
{

public :

	string name;
	int life = 100;
	int maxlife = 100;
	int damage = 50;
	bool isAlive = true;

public :

	void ReceiveDamage(int nbDamage);
	void Attack(Character &cible);
	void Death();
	void printStats();




};

