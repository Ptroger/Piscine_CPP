#include <iostream>
#include "Fixed.hpp"

int main(void) {

	int i = 10;
	float test;

	Fixed a;
	Fixed b(i);
	test = b.toFloat();

	std::cout << "cecoupci  " << test << std::endl;
//	std::cout << b <<std::endl;
	return 0;
}