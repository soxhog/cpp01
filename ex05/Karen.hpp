/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:12:20 by skagiya           #+#    #+#             */
/*   Updated: 2021/11/11 14:40:04 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

typedef enum
{
	ERR_INDEX,
	DEBUG_INDEX,
	INFO_INDEX,
	WARNING_INDEX,
}		e_index;

class Karen
{

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	(Karen::*funcPtr[5])( void );

public:
	Karen( void );
	~Karen( void );
	void	complain( std::string level );
};

# endif
