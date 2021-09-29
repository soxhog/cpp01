# include <string>
# include <iostream>

void	display_test_line(std::string test_name)
{
	std::cout << "--------------- " << test_name << " Test ---------------" << std::endl;
}

int	main(void)
{
	std::cout << "Start main" << std::endl;
	std::string	original_str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &original_str;
	std::string	&stringREF = original_str;

	display_test_line("Address");
	std::cout << "original_str Address: " << &original_str << std::endl;
	std::cout << "stringPTR Address   : " << &(*stringPTR) << std::endl;
	std::cout << "stringREF Address   : " << &stringREF << std::endl;

	display_test_line("Display string");
	std::cout << "original_str: " << original_str << std::endl;
	std::cout << "stringPTR   : " << *stringPTR << std::endl;
	std::cout << "stringREF   : " << stringREF << std::endl;
	std::cout << "End main" << std::endl;
	return (0);
}
