#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon( std::string type );
	~Weapon();
	const std::string	getType( void ) const;
	bool				setType( const std::string& type );
};

#endif /* WEAPON_HPP */