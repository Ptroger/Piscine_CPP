#include "ClapTrap.hpp"

int main(void){
	ClapTrap ct;
	ClapTrap ct2("CT-2000");

	std::cout << std::endl;

	ct.attack("Evil Robot");
	ct.takeDamage(5);
	ct.attack("Evil Robot");
	ct.takeDamage(40);
	ct.attack("Evil Robot");
	ct.beRepaired(40);
	ct.attack("Evil Robot");

	std::cout << std::endl;

	for (int i = 0; i < 11; i++)
		ct2.attack("Evil Robot");
	std::cout << std::endl;
	return (0);
}