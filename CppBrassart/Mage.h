#pragma once
#include "Character.h"

class Mage : public Character
{
	public:
		void Shield();

	public:
		Mage(string pName, int pLife, int pDamage);
};


