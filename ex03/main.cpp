#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("arrow");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("axe"); 
		bob.attack();
	}
	{
		Weapon club = Weapon("hammer");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("gun");
		jim.attack();
	}
} 