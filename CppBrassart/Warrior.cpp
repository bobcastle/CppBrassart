
#include "Warrior.h"

void Warrior::Spin(Character &cible)
{
	cible.ReceiveDamage(damage + 20);
	cout << name << " tourne pour infliger :" << damage + 20 << "de dégats";
}

void  Warrior::Heal()
{
	life += 50;
	mana -= 10;
}

Warrior::Warrior(string pName, int pLife, int pDamage)
{
	life = pLife;
	damage = pDamage;
	name = pName;
}

Warrior::Warrior() {

}
