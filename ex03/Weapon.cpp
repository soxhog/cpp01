#include "Weapon.hpp"

Weapon::Weapon( void )
{
	setType(std::string());
}

Weapon::Weapon( std::string type )
{
	setType(std::string(type));
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType( void ) const
{
	if (_type.empty())
		return ("No Weapon");
	else
		return (_type);
}

void		Weapon::setType(std::string type)
{
	if (!type.empty())
		_type = type;
}