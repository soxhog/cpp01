/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:48:44 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/09 16:58:43 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

void	put_err(int err_num)
{
	std::cout << "Error" << std::endl;
	switch (err_num)
	{
		case MUST_ARGS_NUM:
			std::cout << "Wrong Args Numbers" << std::endl;
			break;
		
		default:
			break;
	}
}

int	main(int argc, char **argv)
{
	if (argc != MUST_ARGS_NUM)
	{
		put_err(ERR_ARGS_NUM);
		return (ERROR);
	}
	return (0);
}