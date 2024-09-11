/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:56:15 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:30:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include "PhoneBook_utils.hpp"
# include <cstdlib>

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