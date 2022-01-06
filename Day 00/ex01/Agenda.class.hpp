#ifndef AGENDA_CLASS_HPP
# define AGENDA_CLASS_HPP
# include "Contact.class.hpp"
class Agenda {

public:
	~Agenda(void);
	Agenda(void);

	Contact	getContact(int index);
	void	addContact(Contact c);
	void	List(void);
	int		Count(void);

private:
	int		count;
	Contact	contacts[8];
};

#endif