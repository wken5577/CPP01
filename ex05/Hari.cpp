#include "Hari.hpp"
#include <iostream>

typedef void (Hari::*f_ptr) (void);

void Hari::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
		<< std:: endl;
}

void Hari::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void Hari::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< std::endl;

}

void Hari::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<<std::endl;
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
		return ;
	(this->*(functions[n]))();
}
