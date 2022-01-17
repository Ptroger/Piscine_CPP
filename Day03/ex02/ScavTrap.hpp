#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap &		operator=( ScavTrap const & rhs );

	void	guardGate( void );
	void	attack( std::string const & target );

};

#endif