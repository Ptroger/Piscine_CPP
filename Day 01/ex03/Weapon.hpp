#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

public:

	Weapon( void );
	Weapon( std::string weaponofchoice );
	~Weapon( void );

	std::string	const &	getType( void ) const;
	void				setType( std::string new_weapon );

private:
	std::string _type;
};

#endif
