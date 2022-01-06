#include <iostream>
#include <iomanip>
#include "Agenda.class.hpp"

Agenda::Agenda(void): count(0) {}
Agenda::~Agenda(void) {}

int 	Agenda::Count(void) {
	return (this->count);
}

Contact	Agenda::getContact(int index)
{
	return (this->contacts[index]);
}

void 	Agenda::addContact(Contact c)
{
	if (this->count >= 8)
		return ;
	this->contacts[this->count] = c;
	this->count++;
}

void	Display(std::string str)
{
	if (str.size() > 10) {
		std::string print = str.substr(0, 9);
		std::cout << print << '.';
	}
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << str;
	std::cout << '|';
}

void	Agenda::List(void)
{
	int i;
	Contact	c;

	i = 0;
	Display("Index");
	Display("First Name");
	Display("Last Name");
	Display("Nickname");
	std::cout << std::endl;

	std::cout << std::setw(44) << std::setfill('-') << '-';
	std::cout << std::endl;
	while (i < count)
	{
		c = this->contacts[i];
		Display(std::to_string(i));
		Display(c.getValue(0));
		Display(c.getValue(1));
		Display(c.getValue(2));
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}