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
		void		announce( void ) const;
		std::string	get_name( void ) const;
		void		set_name( std::string name );
		void		display_name( void ) const;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

# endif
