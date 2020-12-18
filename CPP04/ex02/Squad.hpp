#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		struct elements
		{
			ISpaceMarine *marine;
			elements		*next;
		};

		elements	*lst;
		int			count;

	public:
		Squad();
		Squad(const Squad &s);
		~Squad();
		Squad		&operator=(const Squad &s);

		elements	*lst_copy(elements *lst);
		void		lst_delete(elements *lst);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine* add);
};

#endif
