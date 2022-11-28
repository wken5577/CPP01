#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
	:name(name)
{}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}