
#include "Mage.h"

void Mage::Shield()
{
	life += 20;
	mana -= 10;
}

Mage::Mage(string pName, int pLife, int pDamage)
{
	life = pLife;
	damage = pDamage;
	name = pName;
}
