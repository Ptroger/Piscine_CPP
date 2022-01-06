#include <iostream>
#include <string>
#include <sstream>
#include "Agenda.class.hpp"

int	main(void)
{
	Agenda		a;
	std::string command;

	command = "";
	std::cout << "Agenda opened" << std::endl;
	while (command.compare("EXIT") != 0)
	{
		std::cout << "*-------------------------------------------*" << std::endl << std::endl;
		std::cout << "Enter your command: ";
		std::getline(std::cin, command);

		if (!std::cin.good())
			exit(0);
		if (command.compare("ADD") == 0) {
			if (a.Count() >= 8)
				std::cout << "Agenda is full" << std::endl;
			else {
				Contact c;

				c.Add();
				a.addContact(c);
			}
		}
		else if (command.compare("SEARCH") == 0) {
			std::cout << "Contacts: " << a.Count() << std::endl;
			a.List();
			if (a.Count() == 0)
				continue;
			std::string input;
			int result = -1;
			while (true)
			{
				std::cout << "Enter an index: ";
				std::getline(std::cin, input);
				if (!std::cin.good())
					exit(0);
				result = std::atoi(input.c_str());
				std::cout << result << std::endl;
				if (result == 0 && input.compare("0") != 0)
				{
					std::cout << "Error: index must be between 0 and " << (a.Count() - 1) << std::endl;
					continue ;
				}
				if (result >= 0 && result <= (a.Count() - 1))
					break ;
				std::cout << "Error: index must be between 0 and " << (a.Count() - 1) << std::endl;
			}
			std::cout << std::endl;
			a.getContact(result).Display();
		}
		else if (command.compare("EXIT") == 0) {
			std::cout << "Destroying your agenda and quitting program" << std::endl;
			exit(0);
		}
		else
			std::cout << "Error: you can type ADD, SEARCH or EXIT" << std::endl;
	}
}