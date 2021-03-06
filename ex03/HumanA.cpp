#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

const std::string	HumanA::getName( void ) const
{
	return (_name);
}

void		HumanA::setName(std::string name)
{
	if (!name.empty())
		_name = name;
}

const Weapon	HumanA::getWeapon( void ) const
{
	return (_weapon);
}

void		HumanA::setWeapon( Weapon &weapon )
{
	_weapon = weapon;
}

void		HumanA::attack( void ) const
{
	std::cout << HumanA::getName() << " attacks with his " << _weapon.getType() << std::endl;
}
