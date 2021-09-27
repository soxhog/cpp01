# include "Zombie.hpp"

void	display_explanation(std::string zombie_name, std::string func_name)
{
	std::cout << "Creating a zombie named <" << zombie_name << ">";
	if (func_name.length() != 0)
		std::cout << " using " << func_name << " function";
	std::cout << std::endl;
}

void	display_line(void)
{
	std::cout << "-----------------------------------------------------" << std::endl;
}

int	main(void)
{
	std::string	name1 = "Alex";
	std::string	name2 = "Bob";
	std::string	name3 = "Charlie";

	display_explanation(name1, "");
	Zombie	zombie_alex(name1);
	
	display_line();
	display_explanation(name2, "newZombie");
	Zombie	*zombie_bob = newZombie(name2);

	delete zombie_bob;
	display_line();

	display_explanation(name3, "randomChump");
	randomChump(name3);
	display_line();
	return (0);
}
