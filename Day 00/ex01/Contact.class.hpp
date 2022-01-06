#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

# define COUNT 5

class Contact {

public:
	~Contact(void);
	Contact(void);

	void			Add(void);
	void			Display(void);
	std::string		getValue(int index);
	void			setValue(int index, std::string value);
	static int		findIndex(std::string key);

private:
	static std::string	_keys[COUNT];
	std::string	_values[COUNT];
};

#endif
