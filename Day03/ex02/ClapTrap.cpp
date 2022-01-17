#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Random"), _attackDamage(0), _energyPoints(10), _hitPoints(10)
{
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _attackDamage(0), _energyPoints(10), _hitPoints(10)
{
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ){
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " end his watch.";
	std::cout << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
	return ;
}

ClapTrap & ClapTrap::operator=( const ClapTrap & rhs ){
	_name = rhs.getName();
	_hitPoints = rhs.getHp();
	_energyPoints = rhs.getEp();
	_attackDamage = rhs.getAd();
	return *this;
}

unsigned int ClapTrap::getEp() const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getHp() const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getAd() const
{
	return (this->_attackDamage);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

void ClapTrap::setEp(int n)
{
	this->_energyPoints = n;
}

void ClapTrap::setHp(int n)
{
	this->_hitPoints = n;
}

void ClapTrap::setAd(int n)
{
	this->_attackDamage = n;
}

void ClapTrap::attack(std::string const & target) {
	if (!this->getHp())
		std::cout << "ClapTrap " << this->_name << " is broken and needs repair !" << std::endl;
	else if (!this->getEp())
		std::cout << "ClapTrap " << this->_name << " is exhausted, and cannot fight no more." << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << GREEN
		" attack "
		RESET << target << ", causing " << GREEN << this->_attackDamage << RESET << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->getHp())
		return ;
	std::cout << "ClapTrap " << this->_name << RED " is attacked" RESET " taking " RED << amount << RESET " points of damage!" << std::endl;
	if (this->getHp() <= amount)
		this->setHp(0);
	else
		this->setHp(this->getHp() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is being" BLUE " repaired" RESET ", increasing his life of " BLUE << amount << RESET << " points." << std::endl;
	this->setHp(this->getHp() + amount);
}