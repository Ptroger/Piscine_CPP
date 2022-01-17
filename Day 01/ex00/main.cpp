#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie	z("Jean-Pierre");

	Zombie* z1 = newZombie("Robert");;
	Zombie* z2 = newZombie("Alfonse");
	z1->announce();
	z2->announce();
	delete z1;
	delete z2;

	randomChump("Michael");
	randomChump("Jackson");
	z.announce();
	return (0);
}
