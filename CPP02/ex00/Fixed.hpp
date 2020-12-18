#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &operator=(const Fixed & _raw);

	private:
		int					point;
		static const int	nb_bits;
};

#endif
