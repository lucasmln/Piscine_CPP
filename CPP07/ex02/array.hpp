#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T	*array;
		int		_size;

	public:
		Array(): array(new T[0]), _size(0){};
		Array(unsigned int n): array(new T[n]), _size(n) {};
		Array(Array const &a){
			int		i;

			i = -1;
			if (this != &a)
			{
				this->_size = a._size;
				this->array = new T[a._size];
				while (++i < a._size)
					this->array[i] = a.array[i];
			}
		}
		~Array() {
			delete[] this->array;
		};

		class ErrorIndex: public std::exception
		{
			public:
				virtual const char	*what() const throw() {
					return ("Error : access refuse\n");
				};
		};

		Array	&operator=(Array const &a) {
			int		i;

			i = -1;
			if (this != &a)
			{
				delete[] this->array;
				this->_size = a._size;
				this->array = new T[a._size];
				while (++i < a._size)
					this->array[i] = a.array[i];
			}
			return (*this);
		};
		T		&operator[](int i)
		{
			if (i < 0 || i >= _size)
				throw Array::ErrorIndex();
			return (array[i]);
		};

		int		size(void) const {
			return (_size);
		};
};

#endif
