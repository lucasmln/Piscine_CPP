#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "GiantSpider.hpp"
#include "SabreLaser.hpp"

/*
int main()
{
   Character* moi = new Character("moi");
   std::cout << *moi;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
   std::cout << *moi;
return 0; }
*/

int main()
{
	Character* moi = new Character("moi");
	std::cout << *moi;
	Enemy* b = new RadScorpion();
	Enemy* c = new GiantSpider();
	Enemy* d = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* sl = new SabreLaser();

	moi->equip(pr);
	std::cout << *moi;

	while (b->getHP() > 0)
	{
		moi->attack(b);
		std::cout << *moi;
	}
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();

	moi->equip(sl);
	std::cout << *moi;
	while (c->getHP() > 0)
	{
		if (moi->getAP() < sl->getAPCost())
			moi->recoverAP();
		moi->attack(c);
		std::cout << *moi;
	}
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();


	moi->equip(pf);
	std::cout << *moi;
	while (d->getHP() > 0)
	{
		moi->attack(d);
		std::cout << *moi;
	}
	return 0;
}
