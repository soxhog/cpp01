/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:12:20 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/11 21:25:40 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Karen( void );
	~Karen( void );
	void	complain( std::string level );
};

# endif