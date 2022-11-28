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
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	f_ptr functions[4] = {
		&Hari::debug, &Hari::info, &Hari::warning, &Hari::error
	};
	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*(functions[i]))();
	}

}
