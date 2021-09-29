#include "HumanB.hpp"

HumanB::HumanB( void )
{
	setName(std::string());
	setWeapon(std::string());
}

HumanB::HumanB( std::string name )
{
	setName(std::string(name));
	setWeapon(std::string());
}

HumanB::HumanB( std::string name, std::string type )
{
	setName(name);
	setWeapon(type);
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

std::string	HumanB::getWeapon( void ) const
{
	return (_weapon.getType());
}

void		HumanB::setWeapon(std::string type)
{
	if (!type.empty())
		_weapon.setType(type);
}

void		HumanB::attack( void ) const
{
	std::cout << HumanB::getName() << " attacks with his " << HumanB::getWeapon() << std::endl;
}