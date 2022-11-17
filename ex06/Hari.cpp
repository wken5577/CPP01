#include "Hari.hpp"
#include <iostream>

typedef void (Hari::*f_ptr) (void);

void Hari::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. \nI really do!"
		<< std:: endl;
	std::cout << std::endl;
}

void Hari::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
	std::cout << std::endl;
}

void Hari::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
		<< std::endl;
	std::cout << std::endl;
}

void Hari::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<<std::endl;
	std::cout << std::endl;
}

void Hari::complain(std::string level)
{
	int n;
	f_ptr functions[4] = {
		&Hari::debug, &Hari::info, &Hari::warning, &Hari::error
	};
	if (level.compare("DEBUG") == 0)
		n = 0;
	else if (level.compare("INFO") == 0)
		n = 1;
	else if (level.compare("WARNING") == 0)
		n = 2;
	else if (level.compare("ERROR") == 0)
		n = 3;
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	for(int i = n; i < 4; i++)
	{
		(this->*(functions[i]))();
	}
}
