/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:19:58 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/12 21:56:17 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int		main( int argc, char **argv )
{
	Karen karen;

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("err");
	karen.complain("42Tokyo");
	return (0);
}