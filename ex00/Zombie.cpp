# include "Zombie.hpp"

Zombie::Zombie()
{
	Zombie::set_name(std::string());
}

Zombie::Zombie( std::string name )
{
	Zombie::set_name(name);
}

Zombie::~Zombie()
{
	Zombie::display_name();
	std::cout << " Destructor has been called!!!" << std::endl;
}

std::string	Zombie::get_name() const
{
	return (_name);
}

void		Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::display_name() const
{
	std::cout << "<" << get_name() << ">";
}

void	Zombie::announce() const
{
	Zombie::display_name();
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
