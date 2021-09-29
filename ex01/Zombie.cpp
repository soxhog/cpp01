# include "Zombie.hpp"

Zombie::Zombie()
{
	Zombie::set_name(std::string());
}

Zombie::Zombie( std::string name )
{
	Zombie::set_name(name);
}

Zombie::Zombie( int N, std::string name )
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
	if (!name.empty())
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

Zombie* newZombie( std::string name )
{
	Zombie	*new_zombie = new Zombie(name);
	return (new_zombie);
}

void 	randomChump( std::string name )
{
	Zombie	tmp_zombie(name);

	tmp_zombie.announce();
	tmp_zombie.display_name();
	std::cout << " RandomChump has been called!!!" << std::endl;
}