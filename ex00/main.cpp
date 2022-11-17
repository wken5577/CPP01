#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
	Zombie *zombie1 = newZombie("Foo");
	zombie1->announce();
	randomChump("Foo2");
	delete zombie1;
}