/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:24:30 by skagiya           #+#    #+#             */
/*   Updated: 2021/11/11 14:50:34 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen( void )
{
	funcPtr[ERR_INDEX] = &Karen::error;
	funcPtr[DEBUG_INDEX] = &Karen::debug;
	funcPtr[INFO_INDEX] = &Karen::info;
	funcPtr[WARNING_INDEX] = &Karen::warning;
}

Karen::~Karen( void )
{
}

// static bool	isSameStr(std::string &complainStr, std::string &levelStr)
// {
// 	return (complainStr == levelStr);
// }

void	Karen::complain( std::string levelStr )
{
	int		pos = ("debug" == levelStr) * 1 + \
					("info" == levelStr) * 2 + \
					("warning" == levelStr) * 3;
	(this->*funcPtr[pos])();
	// for (int i = DEBUG_INDEX; i <= ERR_INDEX; i++)
	// {
	// 	outputComplain = funcPtr[i];
	// 	if (isSameStr(complainArry[i], levelStr))
	// 		(this->*outputComplain)();
	// }
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for "
				"my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
				"I just love it!" \
				<< std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
				"You don’t put enough! If you did I would not have to ask for it!" \
				<< std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. "
				"I’ve been coming here for years and "
				"you just started working here last month." \
				<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, "
				"I want to speak to the manager now." \
				<< std::endl;
}
