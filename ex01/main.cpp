#include <iostream>
#include "Zombie.hpp"
Zombie*    zombieHorde(int N, std::string name);

int main()
{
	int num = 3;
	Zombie *arr = zombieHorde(num, "FOO");
	for(int i = 0; i < num; i++)
		arr[i].announce();

	delete[] arr;
	// system("leaks zombi");
}