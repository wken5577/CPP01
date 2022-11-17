#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanA(std::string name, Weapon &weapon);
	void	attack();
};

#endif