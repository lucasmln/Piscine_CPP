#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::nb_bits = 8;

Fixed::Fixed() : point(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called\n";
	this->point = copy.getRawBits();
}

Fixed::Fixed(const int _nb)
{
	point = _nb * (1 << nb_bits);
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float _nb)
{
	point = roundf(_nb * (1 << nb_bits));
	//std::cout << "Float constructor called\n";
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called\n";
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

Fixed	&Fixed::operator=(const Fixed & _raw)
{
	//std::cout << "Assignation operator called\n";
	point = _raw.getRawBits();;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &nb) const
{
	return ((point + nb.point) / (1 << nb_bits));
}

Fixed	Fixed::operator-(const Fixed &nb) const
{
	return ((point - nb.point) / (1 << nb_bits));
}

Fixed	Fixed::operator*(const Fixed &nb) const
{
	return (toFloat() * nb.toFloat());
}

Fixed	Fixed::operator/(const Fixed &nb) const
{
	return (toFloat() / nb.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	point++;
	return (*this);
}

Fixed	Fixed::operator++(int nb)
{
	(void)nb;
	Fixed	temp = *this;
	point++;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	point--;
	return (*this);
}

bool	Fixed::operator<(const Fixed &nb) const
{
	return (point < nb.point);
}

bool	Fixed::operator<=(const Fixed &nb) const
{
	return (point <= nb.point);
}

bool	Fixed::operator>(const Fixed &nb) const
{
	return (point > nb.point);
}

bool	Fixed::operator>=(const Fixed &nb) const
{
	return (point >= nb.point);
}

bool	Fixed::operator==(const Fixed &nb) const
{
	return (point == nb.point);
}

bool	Fixed::operator!=(const Fixed &nb) const
{
	return (point == nb.point);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

std::ostream &operator<<(std::ostream &out, const Fixed &_raw)
{
	return (out << _raw.toFloat());
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}
