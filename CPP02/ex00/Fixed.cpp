#include "Fixed.hpp"
#include <iostream>

const int Fixed::nb_bits = 8;

Fixed::Fixed()
{
	point = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	this->point = copy.getRawBits();
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->point = raw;
}

Fixed & Fixed::operator=(const Fixed & _raw)
{
	std::cout << "Assignation operator called\n";
	point = _raw.getRawBits();;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
