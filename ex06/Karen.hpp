/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:12:20 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/12 21:56:55 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

# define SPACE ' '
# define FIRST_ARG_INDEX 1

typedef enum
{
	DEBUG_INDEX,
	INFO_INDEX,
	WARNING_INDEX,
	ERR_INDEX,
}		e_index;

class Karen
{

private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

public:
	Karen( void );
	~Karen( void );
	void	complain( std::string level );
	void	karenFilter( std::string level );
};

# endif