#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
	this->hasWeapon = true;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->hasWeapon = false;
}

void HumanB::attack()
{
	if (this->hasWeapon)
	{
		std::cout << this->name;
		std::cout << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
	}
	else
		std::cout << "I don't have weapon!!" << std::endl;

}

void	HumanB::setWeapon(Weapon &weapon)
{
	if (this->hasWeapon)
		std::cout << "I alreaady have weapon!!" << std::endl;
	else
	{
		this->weapon = &weapon;
		this->hasWeapon = true;
	}
}