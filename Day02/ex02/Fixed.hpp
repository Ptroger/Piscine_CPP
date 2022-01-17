#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed{

public:

	Fixed( void );							//Constructeur par defaut
	~Fixed( void );							//Destruteur
	Fixed ( const Fixed &src); 				//Constructeur par copie

	Fixed ( const int n);					//Constructeur additionnel int
	Fixed ( const float f);					//Constructeur additionnel float

	Fixed & operator=( const Fixed &rhs );	//Operateur d'assignation

	bool	operator>( const Fixed &rhs );
	bool	operator<( const Fixed &rhs );
	bool	operator>=( const Fixed &rhs );
	bool	operator<=( const Fixed &rhs );
	bool	operator==( const Fixed &rhs );
	bool	operator!=( const Fixed &rhs );

	Fixed	operator*( const Fixed &rhs );
	Fixed	operator/( const Fixed &rhs );
	Fixed	operator+( const Fixed &rhs );
	Fixed	operator-( const Fixed &rhs );

	Fixed & operator++( void );
	Fixed	operator++( int );
	Fixed & operator--( void );
	Fixed	operator--( int );

	static Fixed & min( Fixed & f1, Fixed & f2);
	static Fixed & max( Fixed & f1, Fixed & f2);
	const static Fixed & min( const Fixed & f1, const Fixed & f2);
	const static Fixed & max( const Fixed & f1, const Fixed & f2);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw);

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_value;
	static const int	_fractionalbits;
};

std::ostream &	operator<<( std::ostream &o, const Fixed &rhs );

#endif
