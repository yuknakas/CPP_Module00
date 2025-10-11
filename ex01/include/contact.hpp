/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:22:44 by yuknakas          #+#    #+#             */
/*   Updated: 2025/10/11 12:44:36 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class	Contact
{
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phonenumber;
		std::string secret;

	public:
		Contact(void);
		~Contact();
		int		setContact(int id);
		void	showContactShort(void)const;
		void	showContactExtend(void)const;
		int		getIndex(void)const;
		void	pushIndex(void);
};

# define PROMPT_FIRST "Please input the first name of the contact"
# define PROMPT_LAST "Please input the last name of the contact"
# define PROMPT_NICK "Please input the nickname of the contact"
# define PROMPT_PHONE "Please input the phone number of the contact"
# define PROMPT_SECRET "Please input the darkest secret of the contact"
# define MSG_EXIT "End of imput or error: terminating adding contact"
# define MSG_EMPTY "Empty line unaccepted: press \"ctrl + D\" to" \
					" terminate adding this contact"

#endif