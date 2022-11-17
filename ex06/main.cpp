#include "Hari.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Hari h;

	if (argc != 2)
	{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	h.complain(argv[1]);
}