#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <string>

class Zombie{

public:

	Zombie ( void );
	Zombie( std::string name );
	~Zombie ( void );

	std::string	getzombieName( void ) const;
	void		announce( void ) const;

private:

	std::string _zombieName;
};

#endif
