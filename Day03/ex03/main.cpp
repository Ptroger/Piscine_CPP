#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap st("Jean-Bernard");

	std::cout << std::endl;

	st.attack("Renard Mutant");
	st.takeDamage(15);
	st.attack("Renard Mutant");
	st.takeDamage(95);
	st.attack("Renard Mutant");
	st.beRepaired(100);
	st.attack("Renard Mutant");
	st.guardGate();

	std::cout << std::endl;

	return (0);
}
