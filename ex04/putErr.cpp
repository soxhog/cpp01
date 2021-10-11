/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putErr.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:39:33 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/11 19:08:04 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "putErr.hpp"

void	putErr(int errNum)
{
	std::cout << RED << std::flush;
	std::cout << "Error" << std::endl;
	switch (errNum)
	{
		case ERR_ARGS_NUM:
			std::cout << "Wrong Args Numbers" << std::endl;
			break;
		case ERR_REPLACE_STR_EMPTY:
			std::cout << "ReplaceStr is Empty" << std::endl;
			break;
		case ERR_REPLACEMENT_EMPTY:
			std::cout << "Replacement is Empty" << std::endl;
			break;
		case ERR_STR_EMPTY:
			std::cout << "ReplaceStr or Replacement is Empty" << std::endl;
			break;
		case ERR_FILE_EMPTY:
			std::cout << "File is Empty" << std::endl;
			break;
		case ERR_OPEN:
			std::cout << "File couldn't Open" << std::endl;
			break;
		case ERR_INPUTFILESTREAM:
			std::cout << "InputFileStream is something wrong" << std::endl;
			break;
		default:
			break;
	}
	std::cout << RESET;
}