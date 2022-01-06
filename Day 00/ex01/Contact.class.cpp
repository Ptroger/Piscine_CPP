#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string Contact::_keys[COUNT] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Phone Number",
		"Darkest secret"
};

int 	Contact::findIndex(std::string key)
{
	int i = 0;

	while (i < COUNT)
	{
		if (key.compare(Contact::_keys[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

void 	Contact::setValue(int index, std::string value)
{
	this->_values[index] = value;
}

std::string		Contact::getValue(int index)
{
	return this->_values[index];
}

void 	Contact::Add()
{
	int i;
	i = 0;
	std::cout << "Create new contact" << std::endl;

	while (i < COUNT)
	{
		std::string value = "";
		while (value.compare("") == 0)
		{
			std::cout << "Enter " << Contact::_keys[i] << ": ";
			std::getline(std::cin, value);

			if (!std::cin.good()) {
				std::cout << "Fatal error with input";
				exit(0);
			}
			if (value.compare("") == 0) {
				std::cout << "Error: field cannot be empty!" << std::endl;
			}
		}
		this->setValue(i, value);
		i++;
	}
}

void		Contact::Display(void)
{
	for (int i = 0; i < COUNT; i++)
	{
		std::cout << "- " << this->_keys[i] << ": "
				  << this->_values[i] << std::endl;
	}
}
