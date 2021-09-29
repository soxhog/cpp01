#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		_weapon;
public:
	HumanB( void );
	HumanB( std::string name );
	HumanB( std::string name, std::string type );
	~HumanB();
	std::string	getName( void ) const;
	void		setName( std::string name );
	std::string	getWeapon( void ) const;
	void		setWeapon( std::string type );
	void		attack( void ) const;
};

#endif /* HUMANB_HPP */