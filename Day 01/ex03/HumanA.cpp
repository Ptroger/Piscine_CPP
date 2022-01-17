#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA( std::string name, Weapon& club ) : _name(name), weaponREF(club)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void ) const{
	std::cout << _name << " attacks with his " << weaponREF.getType() << std::endl;
	return ;
}
