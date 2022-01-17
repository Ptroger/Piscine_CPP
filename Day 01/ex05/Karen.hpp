#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	typedef void	(Karen::*fct)(void);

public:

	Karen( void );
	~Karen( void );

	void	complain(std::string level);

private:

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );

};


#endif
