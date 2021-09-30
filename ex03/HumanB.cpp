#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
	// setName(std::string(name));
}

HumanB::HumanB( std::string name, Weapon &weapon ): _name(name), _weapon(&weapon)
{
	// setName(name);
	// setWeapon(weapon);
}

HumanB::~HumanB()
{
}

std::string	HumanB::getName( void ) const
{
	return (_name);
}

bool		HumanB::setName(std::string name)
{
	if (name.empty())
	{
		std::cout << "Empty Name does NOT Accepted!!" << std::endl;
		return (false);
	}
	else
	{
		_name = name;
		return (true);	
	}
}

Weapon	HumanB::getWeapon( void ) const
{
	return (*_weapon);
}

bool	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}

void		HumanB::attack( void ) const
{
	// if (*_weapon != NULL)
	{
		std::cout << HumanB::getName() << " attacks with his " << _weapon->getType() << std::endl;
	}
}