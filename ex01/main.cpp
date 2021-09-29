# include "Zombie.hpp"

void	display_explanation(std::string zombie_name, std::string func_name)
{
	std::cout << "Creating a zombie named <" << zombie_name << ">";
	if (func_name.length() != 0)
		std::cout << " using " << func_name << " function";
	std::cout << std::endl;
}

void	announce_all_zombies(Zombie *zombie_horde, int num_zombies)
{
	for (int i = 0; i < num_zombies; i++)
		zombie_horde[i].announce();
}

int	main(void)
{
	std::cout << "Start main" << std::endl;
	std::string	name = "Alex";
	int			num_zombies = 5;

	display_explanation(name, "zombieHorde");
	Zombie	*zombie_horde = zombieHorde(num_zombies, name);
	announce_all_zombies(zombie_horde, num_zombies);
	delete [] zombie_horde;
	std::cout << "End main" << std::endl;
	return (0);
}
