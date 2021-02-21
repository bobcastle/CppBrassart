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
	
	if (cible.isAlive) 
	{
		cout << name << " inflige " << damage << " point de degat a " << cible.name << endl;
		cible.ReceiveDamage(damage);
	}
	
}

void Character::Death()
{
		isAlive = false;
		cout << name << " est mort" << endl;

}

void Character::printStats()
{
	cout << "| Nom: " << name << "| Vie: " << life << "| En vie: " << isAlive;
}

Character::Character()
{
}

Character::Character(string pName, int pLife, int pDamage)
{
	life = pLife;
	damage = pDamage;
	name = pName;
	cout << name << " apparait !" << endl;
}



