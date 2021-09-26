#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
		std::string	_name;

public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void		announce( void );
		std::string	get_name( void );
		void		display_name( void );
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

# endif
