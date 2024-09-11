/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:56:15 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:08:24 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include "PhoneBook_utils.hpp"

class PhoneBook
{
	private:
		Contact persons[8];
		int index_;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void ft_add();
		void ft_search();
};
#endif