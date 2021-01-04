#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *array, unsigned int length, void (*f)(T const &))
{
	unsigned int i;

	i = -1;
	while (++i < length)
		f(array[i]);
}

template <typename T>
void	show(T &elem)
{
	std::cout << "elem is : " << elem << std::endl;
}

#endif
