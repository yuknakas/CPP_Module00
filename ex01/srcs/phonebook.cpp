/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 22:01:48 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/11 12:39:57 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/myawsphnbk.hpp"

PhoneBook::PhoneBook(void)
{
	this->count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(void)
{
	int	index;

	if (this->count < 8)
	{
		if (!this->contacts[count].setContact(count + 1))
		this->count++;
	}
	else
	{
		index = PhoneBook::findIndex(1);
		if (!this->contacts[index].setContact(9))
		{
			index = 0;
			while (index < 8)
			{
				this->contacts[index].pushIndex();
				index++;
			}
		}
	}
}

int	PhoneBook::findIndex(int i)
{
	int	index;

	if (i < 1 || this->count < i)
		return (-1);
	index = 0;
	while (index < this->count)
	{
		if (i == this->contacts[index].getIndex())
			return(index);
		index++;
	}
	return (-1);
}

static void	_printHeader(void)
{
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Nickname";
	std::cout << std::resetiosflags(std::ios::adjustfield) << std::endl;
}

void	PhoneBook::showAllContacts(void)
{
	int	index;

	_printHeader();
	index = 1;
	while (index <= this->count)
	{
		this->contacts[this->findIndex(index)].showContactShort();
		index++;
	}
}

static int	_getIndexInput(int count)
{
	std::string	line;
	int			index;

	while (1)
	{
		if (!std::getline(std::cin, line))
		{
			std::cout << MSG_EXIT << std::endl;
			return (-1);
		}
		if (!line.empty())
		{
			index = atoi(line.c_str());
			if (0 < index && index <= count)
				return (index);
			std::cout << MSG_INDEX << count << std::endl;
		}
		else
			std::cout << MSG_EMPTY_SEARCH << std::endl;
	}	
	return (-1);
}

void	PhoneBook::searchContact(void)
{
	int	index;

	if (this->count == 0)
	{
		std::cout << MSG_NO_ENTRY << std::endl;
		return ;
	}
	this->showAllContacts();
	std::cout << PROMPT_SELECT << std::endl;
	index = _getIndexInput(this->count);
	if (index < 0)
		return ;
	this->contacts[this->findIndex(index)].showContactExtend();
}
