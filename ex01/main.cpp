#include <iostream>
#include "Zombie.hpp"
Zombie*    zombieHorde(int N, std::string name);

int main()
{
	int num = 3;
	Zombie *arr = zombieHorde(num, "FOO");
	arr->announce();
	delete arr;
	// system("leaks zombi");
}