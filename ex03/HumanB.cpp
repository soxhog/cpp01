#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	setName(std::string(name));
}

HumanB::HumanB( std::string name, Weapon &weapon )
{
	setName(name);
	setWeapon(weapon);
}

HumanB::~HumanB()
{
}

std::string	HumanB::getName( void ) const
{
	return (_name);
}

void		HumanB::setName(std::string name)
{
	if (!name.empty())
		_name = name;
}

Weapon	HumanB::getWeapon( void ) const
{
	return (_weapon);
}

void		HumanB::setWeapon( Weapon &weapon )
{
	_weapon = weapon;
}

void		HumanB::attack( void ) const
{
	std::cout << HumanB::getName() << " attacks with his " << _weapon.getType() << std::endl;
}