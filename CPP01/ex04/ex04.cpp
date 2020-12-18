#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string		*ptr;

	ptr = &str;
	std::cout << "By ptr : " << *ptr << std::endl;
	std::cout << "By reference : " << ref << std::endl;
}
