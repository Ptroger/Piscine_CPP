#ifndef PISCINE_CPP_FIXED_H
#define PISCINE_CPP_FIXED_H


class Fixed
{
	public:

		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &src );
		Fixed( const int n );
		Fixed( const float f );

		Fixed & operator=( const Fixed &rhs );

		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_value;
		static const int	_fractionalbits;
};

std::ostream &	operator<<( std::ostream &o, const Fixed &rhs );

#endif //PISCINE_CPP_FIXED_H
