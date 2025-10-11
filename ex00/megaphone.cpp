/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:11:12 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/06 11:12:14 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void	all_upper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void	megaphaone(char *str)
{
	if (!str)
		return ;
	all_upper(str);
	std::cout << str;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		megaphaone(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
