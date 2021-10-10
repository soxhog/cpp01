/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:48:44 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/10 21:54:41 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"
# include "putErr.hpp"

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
	Replace		replace;
	std::string	filename(argv[FILENAME_INDEX]);
	std::string	replaceStr(argv[REPLACE_STR_INDEX]);
	std::string	replacement(argv[REPLACEMENT_INDEX]);

	if (argc != MUST_ARGS_NUM)
	{
		putErr(ERR_ARGS_NUM);
		return (ERROR);
	}
	if (!replace.setFileName(filename))
		return (ERROR);
	if (!replace.openFile())
		return (ERROR);
	if (!replace.setStrOfFileContents())
		return (ERROR);
	if (!replace.replace(replaceStr, replacement))
		return (ERROR);
	replace.outputToFile();
	return (0);
}