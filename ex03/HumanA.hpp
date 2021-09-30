#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon		&_weapon;
public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA();
	std::string	getName( void ) const;
	void		setName( std::string name );
	Weapon	getWeapon( void ) const;
	void		setWeapon( Weapon &weapon );
	void		attack( void ) const;
};

#endif /* HUMANA_HPP */