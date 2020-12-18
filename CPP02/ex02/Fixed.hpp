#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int int_nb);
		Fixed(const float float_nb);
		Fixed &operator=(const Fixed & _raw);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void)const;

		bool operator>(const Fixed &nb) const;
		bool operator>=(const Fixed &nb) const;
		bool operator<(const Fixed &nb) const;
		bool operator<=(const Fixed &nb) const;
		bool operator==(const Fixed &nb) const;
		bool operator!=(const Fixed &nb) const;

		Fixed operator+(const Fixed &nb) const;
		Fixed operator-(const Fixed &nb) const;
		Fixed operator*(const Fixed &nb) const;
		Fixed operator/(const Fixed &nb) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static const Fixed		&min(const Fixed &a, const Fixed &b);
		static const Fixed		&max(const Fixed &a, const Fixed &b);


	private:
		int					point;
		static const int	nb_bits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);
const Fixed &max(Fixed &a, Fixed &b);
const Fixed &min(Fixed &a, Fixed &b);
#endif
