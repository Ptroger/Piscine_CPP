#ifndef PISCINE_CPP_FIXED_H
#define PISCINE_CPP_FIXED_H


class Fixed
{
	public:

		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &src );

		Fixed & operator=( const Fixed &rhs );

		int	getRawBits( void ) const;
		void setRawBits( int const raw );

	private:

		int					_fixed;
		static const int	_fractionalbits;
};

#endif //PISCINE_CPP_FIXED_H
