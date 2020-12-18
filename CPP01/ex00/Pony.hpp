#include <iostream>
#include <time.h>

class Pony
{
	private:
		int		lvl;
		int		hp;
		int		att;
		int		def;
		std::string		name;
		std::string		color;
		std::string		language;
		int				age;

	public:
		Pony(int _age, std::string _name, std::string _color, std::string _language);
		void	lvl_up();
		void	print_stats();
		void	print_infos();
		~Pony();
};
