#include <iostream>
#include <fstream>


std::string		change_ext(std::string origin)
{
	std::string		replace;
	unsigned long	i;

	i = 0;
	while (origin[i] && origin[i] != '.')
	{
		replace += origin[i];
		i++;
	}
	replace += ".replace";
	return (replace);
}

void	read_file(std::ifstream *input, std::string name, std::string s1, std::string s2)
{
	char			c;
	unsigned long	i;
	std::string		s;
	std::string		save;
	std::ofstream	output(/*change_ext(name)*/ name + ".replace", std::ios::out | std::ios::trunc);

	std::cout << "test\n";
	while (input->get(c))
	{
		i = 0;
		if (c == s1[i])
		{
			while (c == s1[i])
			{
				save += c;
				input->get(c);
				i++;
			}
			if (i == s1.length())
				s += s2;
			else
				s += save;
			save = "";
		}
			s += c;
	}
	std::cout << "Sortie : " << s;
	output << s;
	input->close();
	output.close();
}

int main(int ac, char **av)
{
	std::string		name;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
		return (1);
	if (av[2][0] == '\0' || av[3][0] == '\0')
		return (1);

	name = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream	input(name, std::ios::in);

	if (input)
	{
		read_file(&input, name, s1, s2);
	}
	else
		std::cout << "File open fail\n";
	return (0);
}