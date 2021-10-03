#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

const std::string&	HumanB::getName( void ) const
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

const Weapon&	HumanB::getWeapon( void ) const
{
	return (*_weapon);
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}

void	HumanB::attack( void ) const
{
	std::cout << HumanB::getName();
	if (_weapon)
	{
		std::cout << " attacks with his " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << " attack without weapon" << std::endl;
	}
}
