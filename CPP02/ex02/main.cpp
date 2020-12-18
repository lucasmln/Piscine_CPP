#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "increment : " << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "decrement : " << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "calcul :" << std::endl;
	a = a + 16;
	std::cout << a << std::endl;
	a = a - 10;
	std::cout << a << std::endl;
	a = a * 16;
	std::cout << a << std::endl;
	a = a / 16;
	std::cout << a << std::endl;

	std::cout << "comparaison : " << std::endl;

	std::cout << (a > b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a <= b) << std::endl;

	return 0;
}
