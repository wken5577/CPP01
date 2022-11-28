#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
	:weapon(weapon), name(name)
{
}

void HumanA::attack()
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}