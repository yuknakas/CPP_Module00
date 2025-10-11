/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:43:41 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/11 13:57:45 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/myawsphnbk.hpp"

static void	_printPrompt(void);

int	main(void)
{
	PhoneBook	myBook;
	std::string	usr_input = "";

	_printPrompt();
	while (1)
	{
		std::cout << COLOR_YELLOW << MSG_WAIT << std::endl;
		std::cout << COLOR_GREEN;
		if (!std::getline(std::cin, usr_input))
		{
			std::cout << COLOR_RED << MSG_EOF << COLOR_DEFAULT << std::endl;
			break ;
		}
		std::cout << COLOR_DEFAULT;
		if (usr_input.compare("ADD") == 0)
			myBook.addContact();
		else if (usr_input.compare("SEARCH") == 0)
			myBook.searchContact();
		else if (usr_input.compare("EXIT") == 0)
			break ;
		else if (usr_input.compare("HELP") == 0)
			_printPrompt();
		else
			std::cout << MSG_INVALID_CMD << std::endl;
	}
	return (0);
}

static void	_printPrompt(void)
{
	std::cout	<< "================[" << COLOR_MAGENTA << "My Awesome Phonebook"
				<< COLOR_DEFAULT << "]================\n"
				<< "To Interact with the PhoneBook use the following commands\n"
				<< "[" << COLOR_YELLOW << "ADD" << COLOR_DEFAULT << "] || "
				<< "[" << COLOR_YELLOW << "SEARCH" << COLOR_DEFAULT << "] || "
				<< "[" << COLOR_YELLOW << "EXIT" << COLOR_DEFAULT << "]" << std::endl;
}
