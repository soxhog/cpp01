/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:48:44 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/11 18:37:22 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"
# include "putErr.hpp"

int	main(int argc, char **argv)
{
	Replace		replace;
	std::string	filename;
	std::string	replaceStr;
	std::string	replacement;

	if (argc != MUST_ARGS_NUM)
	{
		putErr(ERR_ARGS_NUM);
		return (ERROR);
	}
	filename = argv[FILENAME_INDEX];
	replaceStr = argv[REPLACE_STR_INDEX];
	replacement = argv[REPLACEMENT_INDEX];
	if (!replace.setUpFile(filename))
		return (ERROR);
	if (!replace.replace(replaceStr, replacement))
		return (ERROR);
	replace.outputToFile();
	return (0);
}