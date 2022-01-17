#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( void ) : ClapTrap(){
	std::cout << GREY YELLOW;
	std::cout << "ScavTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << GREY YELLOW;
	std::cout << "ScavTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap( void )
{
	std::cout << GREY YELLOW;
	std::cout << "ScavTrap " << this->_name << " out.";
	std::cout << RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
		this->_hitPoints = rhs.get_hp();
		this->_energyPoints = rhs.get_nrj();
		this->_attackDamage = rhs.get_atck();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate( void ){
	std::cout << VIOLET "YOU SHALL NOT PASS." RESET << std::endl;
}

void	ScavTrap::attack( std::string const & target ){
	if (!this->get_hp())
		std::cout << "ScavTrap " << this->_name << " is broken and needs repair !" << std::endl;
	else if (!this->get_nrj())
		std::cout << "ScavTrap " << this->_name << " is roasted, no more fights for him." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << GREEN " attack " RESET << target << ", causing " GREEN << this->_attackDamage << RESET " points of damage!" << std::endl;
		this->set_nrj(this->get_nrj() - 1);
	}
	return ;
}
