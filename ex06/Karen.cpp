/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:24:30 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/12 21:55:42 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

static bool	isSameStr(std::string &complainStr, std::string &levelStr)
{
	return (complainStr == levelStr);
}

static bool	isLowAlpha( char c )
{
	return ('a' <= c && c <= 'z');
}

static void	putTitle( const char *levelStr, size_t len )
{
	std::string	upperStr;
	char		c;

	for (size_t i = 0; i < len; i++)
	{
		c = levelStr[i];
		if (isLowAlpha(c))
			c -= SPACE;
		upperStr += c;
	}
	std::cout << "[ " << upperStr << " ]" << std::endl;
}

void	Karen::karenFilter( std::string levelStr )
{
	void		(Karen::*outputComplain)(void);
	void		(Karen::*funcPtr[])( void ) = 
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string	complainArry[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = DEBUG_INDEX; i <= ERR_INDEX; i++)
	{
		if (isSameStr(complainArry[i], levelStr))
			while (i <= ERR_INDEX)
			{
				putTitle(complainArry[i].c_str(), complainArry[i].length());
				outputComplain = funcPtr[i];
				(this->*outputComplain)();
				i++;
			}
	}
}

void	Karen::complain( std::string levelStr )
{
	void		(Karen::*outputComplain)(void);
	void		(Karen::*funcPtr[])( void ) = 
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string	complainArry[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = DEBUG_INDEX; i <= ERR_INDEX; i++)
	{
		outputComplain = funcPtr[i];
		if (isSameStr(complainArry[i], levelStr))
			(this->*outputComplain)();
	}
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