#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <iostream>

template <typename T>
bool		easyfind(T &conteneur, int n)
{
	typename T ::const_iterator it = std::find(conteneur.begin(), conteneur.end(), n);
	return (it != conteneur.end() ? true : false);
}

# endif
