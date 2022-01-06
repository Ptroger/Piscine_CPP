#include "Weapon.hpp"

Weapon::Weapon( void )
{
	this->_type = "random attack club";
	return ;
}

Weapon::Weapon( std::string weaponofchoice ) : _type(weaponofchoice)
{
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
	return ;
}

std::string	const &Weapon::getType( void ) const{
	return this->_type;
}

void	Weapon::setType( std::string new_weapon ){
	this->_type = new_weapon;
	return ;
}
