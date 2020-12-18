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
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void)const;

		Fixed &operator=(const Fixed & _raw);

	private:
		int					point;
		static const int	nb_bits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif
