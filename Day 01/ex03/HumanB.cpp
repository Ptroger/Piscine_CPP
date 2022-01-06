#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : _name(name),_weaponPTR(0)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void ) const{
	std::cout << _name;
	if (!this->_weaponPTR)
		std::cout << " cannot attack without weapon..." << std::endl;
	else
		std::cout << " attacks with his " << _weaponPTR->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon& weapon){
	this->_weaponPTR = &weapon;
	return ;
}
