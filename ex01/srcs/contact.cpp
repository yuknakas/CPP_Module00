/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:47:04 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/11 10:59:46 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/myawsphnbk.hpp"

Contact::Contact(void)
{
	this->index = 0;
}

Contact::~Contact()
{
}

static int	_checkInput(std::string prompt, std::string line)
{
	std::cout << prompt << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, line))
		{
			std::cout << MSG_EXIT << std::endl;
			return (1);
		}
		if (!line.empty())
			return (0);
		std::cout << MSG_EMPTY << std::endl;
	}	
	return (0);
}

int	Contact::setContact(int id)
{
	std::string	tmp_first;
	std::string	tmp_last;
	std::string	tmp_nickname;
	std::string	tmp_phone;
	std::string	tmp_secret;

	if (_checkInput(PROMPT_FIRST, tmp_first) ||
		_checkInput(PROMPT_LAST, tmp_last) ||
		_checkInput(PROMPT_NICK, tmp_nickname) ||
		_checkInput(PROMPT_PHONE, tmp_phone) ||
		_checkInput(PROMPT_SECRET, tmp_secret))
		return (1);
	this->index = id;
	this->first_name = tmp_first;
	this->last_name = tmp_last;
	this->nickname = tmp_nickname;
	this->phonenumber = tmp_phone;
	this->secret = tmp_secret;
	return (0);
}

static void	_printShort(const std::string& line)
{
	if (line.length() <= 10)
		std::cout << std::right << std::setw(10) << line;
	else
		std::cout << std::right << std::setw(10) << (line.substr(0, 9) + ".");
}

void	Contact::showContactShort(void)const
{
	std::cout << std::right << std::setw(10) << this->index;
	std::cout << "|";
	_printShort(this->first_name);
	std::cout << "|";
	_printShort(this->last_name);
	std::cout << "|";
	_printShort(this->nickname);
	std::cout << std::resetiosflags(std::ios::adjustfield) << std::endl;
}

void	Contact::showContactExtend(void)const
{
	std::cout << "Index: " << this->index << std::endl;
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phonenumber: " << this->phonenumber << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}

int	Contact::getIndex(void)const
{
	return (this->index);
}

void	Contact::pushIndex(void)
{
	this->index--;
}
