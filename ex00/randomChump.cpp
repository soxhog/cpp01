# include "Zombie.hpp"

void 	randomChump( std::string name )
{
	Zombie	tmp_zombie(name);

	tmp_zombie.announce();
	tmp_zombie.display_name();
	std::cout << " RandomChump has been called!!!" << std::endl;
}
