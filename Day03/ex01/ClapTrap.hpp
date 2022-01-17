#include <iostream>
#include <string>

# define GREY "\033[100m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[36m"
# define VIOLET "\033[35m"

class ClapTrap
{
	public :

	ClapTrap( void );
	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap & src);
	~ClapTrap( void );
	ClapTrap & operator=( const ClapTrap & rhs);
	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	unsigned int 		getHp( void ) const;
	unsigned int 		getEp( void ) const;
	unsigned int 		getAd( void ) const;
	std::string	getName( void ) const;
	void 		setHp(int n);
	void 		setEp(int n);
	void 		setAd(int n);

	private :
	std::string	_name;
	unsigned int 		_attackDamage;
	unsigned int 		_energyPoints;
	unsigned int 		_hitPoints;
};