#include "Character.h"
#include <iostream>





void Character::ReceiveDamage(int nbDamage)
{
	life -= nbDamage;

	if (life <= 0)
	{
		life = 0;
		Death();
	}

}

void Character::Attack(Character &cible)
{
	cible.ReceiveDamage(damage);
}

void Character::Death()
{
	if (this->life <= 0)
	{
		bool isAlive = false;
		cout << this->name << " est mort";
	}
}

void Character::printStats()
{
	cout << "| Nom: " << this->name << "| Vie: " << this->life << "| En vie: " << this->isAlive;
}


