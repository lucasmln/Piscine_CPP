#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::nb_bits = 8;

Fixed::Fixed() : point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	this->point = copy.getRawBits();
}

Fixed::Fixed(const int _nb)
{
	point = _nb * 256;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float _nb)
{
	point = roundf(_nb * (1 << nb_bits));
	std::cout << "Float constructor called\n";
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

float	Fixed::toFloat(void) const
{
	return (float(point) / (1 << nb_bits));
}

int		Fixed::toInt(void) const
{
	return (this->point / (1 << nb_bits));
}

Fixed &Fixed::operator=(const Fixed & _raw)
{
	std::cout << "Assignation operator called\n";
	point = _raw.getRawBits();;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &_raw)
{
	return (out << _raw.toFloat());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
