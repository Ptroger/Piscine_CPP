#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int i ) : _value(i << _fractionalbits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const float f): _value(roundf(f * (1 << _fractionalbits))){
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return ;
}

int		Fixed::toInt( void ) const{
	return (_value >> _fractionalbits);
}

std::ostream &		operator<<( std::ostream & o, const Fixed &rhs ){
//	std::cout << "Stream operator called" << std::endl;
	o << rhs.toFloat();
	return o;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->_value / (1 << this->_fractionalbits));
}

const int Fixed::_fractionalbits = 8;
