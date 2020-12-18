#include "Squad.hpp"

Squad::elements	*Squad::lst_copy(elements *lst)
{
	if (!lst)
		return (NULL);
	return (new Squad::elements((Squad::elements) {lst->marine->clone(), lst_copy(lst->next)}));
}

void			Squad::lst_delete(elements *lst)
{
	if (!lst)
		return;
	delete lst->marine;
	lst_delete(lst->next);
	delete (lst->next);
}

Squad::Squad(): lst(NULL), count(0)
{
}

Squad::Squad(const Squad &s): lst(lst_copy(s.lst)), count(s.count)
{
}

Squad	&Squad::operator=(const Squad &s)
{
	lst_delete(lst);
	lst = lst_copy(s.lst);
	count = s.count;
	return (*this);
}

Squad::~Squad()
{
	lst_delete(lst);
}

int				Squad::getCount() const
{
	return (count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	Squad::elements		*tmp;

	tmp = lst;
	while (n-- > 0 && tmp)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp->marine);
}

int				Squad::push(ISpaceMarine *add)
{
	Squad::elements		*tmp;
	Squad::elements		**save;
	
	if (!add)
		return (count);
	tmp = lst;
	while (tmp)
	{
		if (tmp->marine == add)
			return (count);
		tmp = tmp->next;
	}
	save = &lst;
	while (*save)
		save = &(*save)->next;
	 *save = new Squad::elements((Squad::elements) {add, NULL});
	return (++count);
}
