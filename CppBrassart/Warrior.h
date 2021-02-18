#pragma once
#include "Character.h"

class Warrior : public Character
{

	public:
		void Spin(Character &cible);
		void Heal();

	public:
		Warrior(string pName, int pLife, int pDamage);
		Warrior();


};


