/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:14:52 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/02 09:47:55 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <iomanip>

// ************************************************************************** //
//                               PhoneBook Class                                //
// ************************************************************************** //

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
		void	showAllContacts(void);
		void	searchContact(void);
};

# define MSG_INDEX "Index does not exist. Current index: 1 ~ "
# define MSG_NO_ENTRY "There are no contacts saved or to search (yet!)"
# define MSG_EMPTY_SEARCH "Empty line unaccepted: press \"ctrl + D\" to" \
							" terminate searching for a contact"
# define MSG_STOI "Warning: Non-numeric characters detected " \
					"(leading whitespace is ignored)"
# define PROMPT_SELECT "Please input the index of the contact" \
						" that you would like to see"

#endif