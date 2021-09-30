#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type)
{
	// setType(type);
}

Weapon::~Weapon()
{
}

const std::string	Weapon::getType( void ) const
{
	if (_type.empty())
		return ("No Weapon");
	else
		return (_type);
}

bool		Weapon::setType( const std::string& type )
{
	if (type.empty())
	{
		std::cout << "Empy Weapon does NOT Accepted!" << std::endl;
		return (false);
	}
	else
	{
		_type = type;
		return (true);
	}
}