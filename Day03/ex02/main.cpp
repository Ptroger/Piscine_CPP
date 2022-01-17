#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	FragTrap ft("Beebob2000");

	std::cout << std::endl;

	ft.attack("General Grivious");
	ft.takeDamage(99);
	ft.attack("General Grivious");
	ft.takeDamage(1);
	ft.attack("General Grivious");
	ft.beRepaired(10);

	for(int i = 0; i < 99; i++)
		ft.attack("General Grivious");
	ft.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
