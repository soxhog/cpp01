#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		*_weapon;
public:
	HumanB( std::string name );
	HumanB( std::string name, Weapon &weapon );
	~HumanB();
	std::string	getName( void ) const;
	bool		setName( std::string name );
	Weapon	getWeapon( void ) const;
	bool		setWeapon( Weapon &weapon );
	void		attack( void ) const;
};

#endif /* HUMANB_HPP */