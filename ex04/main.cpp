/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:48:44 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/09 19:17:07 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

void	put_err(int err_num)
{
	std::cout << "Error" << std::endl;
	switch (err_num)
	{
		case ERR_ARGS_NUM:
			std::cout << "Wrong Args Numbers" << std::endl;
			break;
		case ERR_S_EMPTY:
			std::cout << "s1 or s2 is Empty" << std::endl;
			break;
		default:
			break;
	}
}

bool	is_empty(char *s)
{
	if (s == NULL)
		return (true);
	if (*s == 0)
		return (true);
	return (false);
}

int	main(int argc, char **argv)
{
	if (argc != MUST_ARGS_NUM)
	{
		put_err(ERR_ARGS_NUM);
		return (ERROR);
	}
	if (is_empty(argv[S1_INDEX]) || is_empty(argv[S2_INDEX]))
	{
		put_err(ERR_S_EMPTY);
		return (ERROR);
	}
	return (0);
}