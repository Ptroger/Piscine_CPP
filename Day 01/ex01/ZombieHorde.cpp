#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde( int N, std::string name ){

	std::string::iterator erase_first = name.end();
	Zombie	*z = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		name += "_";
		std::stringstream ss;
		ss << i + 1;
		name += ss.str();
		z[i].setzombieName( name );
		std::string::iterator erase_last = name.end();
		name.erase(erase_first, erase_last);
	}
	return z;
}