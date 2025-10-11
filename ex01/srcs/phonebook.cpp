/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 22:01:48 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/10 23:08:36 by yuknakas         ###   ########.fr       */
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
		if (!contacts[count].setContact(count + 1))
		this->count++;
	}
	else
	{
		index = PhoneBook::findIndex(1);
		if (!contacts[index].setContact(9))
		{
			index = 0;
			while (index < 8)
			{
				contacts[index].pushIndex();
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
		if (i == contacts[index].getIndex())
			return(index);
		index++;
	}
	return (-1);
}
