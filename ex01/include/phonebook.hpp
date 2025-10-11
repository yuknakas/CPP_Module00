/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:14:52 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/10 23:24:53 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class	PhoneBook
{
	private:
		int		count;
		Contact	contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook();
		void	addContact(void);
		int		findIndex(int index);
		void	searchContact(void);
};

const std::string	MSG_INDEX = "Index does not exist. Current index: 0 ~ ";


#endif