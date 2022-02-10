#include "easyfind.hpp"
#include <cstdlib>

int main(void)
{
	srand(time(NULL));
	std::vector<int>	tab(42, 0);
	
	for (int i = 0; i < 42 ; i++)
		tab[i] = rand() % 42 + 1;
	for (int i = 0; i < 42 ; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	try 
	{
		std::cout << *(::easyfind(tab, 42)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
