#include "Character.hpp"

Character::Character(const std::string name): _name(name), count(0)
{
	int		i;

	i = -1;
	while (++i < 4)
		_inv[i] = NULL;
}

Character::Character(const Character &c): _name(c.getName()), count(c.count)
{
	int		i;

	i = -1;
	while (++i > 4)
		_inv[i] = c._inv[i]->clone();
}

Character::~Character()
{
	int		i;

	i = -1;
	while (++i < 4)
		delete _inv[i];
}

Character		&Character::operator=(const Character &c)
{
	int		i;

	i = -1;
	while (++i < 4)
		delete _inv[i];
	i = -1;
	while (++i < 4)
		_inv[i] = c._inv[i]->clone();
	_name = c.getName();
	count = c.count;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

void		Character::equip(AMateria* m)
{
    if(count != 4 && m != 0)
    {
        for (int i = 0; i < count; i++)
        {
            if(_inv[i] == m)
                return;
        }
        _inv[count] = m;
        count++;
    }
    return;
}

void		Character::unequip(int idx)
{
	int		i;

	if (idx > 3 || idx < 0 || !_inv[idx])
		return;
	_inv[idx] = NULL;
	i = idx;
	while (i < 3)
	{
		_inv[i] = _inv[i + 1];
		_inv[i + 1] = NULL;
		i++;
	}
	count--;
}

void		Character::use(int idx, ICharacter &target)
{
   	if(idx >= 0 && idx <= count && _inv[idx] != NULL)
    {
        _inv[idx]->use(target);
    }
}
