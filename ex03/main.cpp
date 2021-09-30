# include <string>
# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"


void	display_test_line(std::string test_name)
{
	std::cout << "--------------- " << test_name << " Test ---------------" << std::endl;
}

int	main(void)
{
	std::cout << "Start main" << std::endl;

	std::string	type1 = "Gun";
	std::string	type2 = "Katana";
	std::string	name1 = "Jack";
	std::string	name2 = "Ryoma";
	Weapon		wepon1(type1);
	Weapon		wepon2(type2);
	HumanA		Jack_A(name1, wepon1);
	HumanB		Ryoma_B(name2);

	Jack_A.attack();
	// Ryoma_B.attack();
	Ryoma_B.setWeapon(wepon2);
	Ryoma_B.attack();
	std::cout << "End main" << std::endl;
	return (0);
}
