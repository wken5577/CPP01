#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie **zombie = new Zombie*[N];
	for(int i = 0; i < N; i++)
	{
		zombie[i] = new Zombie(name);
	}
	for(int i = 0; i < N; i++)
	{
		zombie[i]->announce();
	}
	for(int i = 1; i < N; i++)
	{
		delete zombie[i];
	}
	Zombie *result = zombie[0];
	delete[] zombie;
	return result;
}