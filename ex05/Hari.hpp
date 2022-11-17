#ifndef HARI_HPP
#define HARI_HPP

#include <string>

class Hari
{
public:
	void complain(std::string level);

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif