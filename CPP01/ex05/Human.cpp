#include "Human.hpp"

Human::Human()
{
	return ;
}

std::string	Human::identifier()
{
	return (this->brain.identifier());
}

Brain		Human::getBrain()
{
	return (this->brain);
}
