#include <string>

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

class Zombie{

public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie ( void );

	void		setzombieName( std::string name );
	std::string getzombieName( void ) const;
	void		announce( void ) const;

private:

	std::string _zombieName;
};

#endif
