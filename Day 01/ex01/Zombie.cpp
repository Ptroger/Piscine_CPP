#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie ( void ){
	std::cout << "A new Zombie crawl in search of blood." << std::endl ;
	return ;
}

Zombie::Zombie ( std::string name ) : _zombieName(name){
	std::cout << _zombieName << " crawl in search of blood." << std::endl ;
	return ;
}

Zombie::~Zombie ( void ){
	std::cout << _zombieName << " died." << std::endl ;
	return ;
}

void	Zombie::setzombieName( std::string name ){
	this->_zombieName = name;
	return ;
}

std::string Zombie::getzombieName( void ) const{
	return (this->_zombieName);
}

void	Zombie::announce( void ) const{
	std::cout << _zombieName << " BraiiiiiiinnnzzzZ..." << std::endl ;
}