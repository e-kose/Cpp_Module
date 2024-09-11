/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:54:46 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:08:08 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define RED "\033[1;31m"

class Contact
{
	private:
		std::string Name;
		std::string Surname;
		std::string Nickname;
		std::string Secret;
		int	PhoneNumber;
		
	public:
		void ft_set_name(std::string name);
		void ft_set_number(int number);
		void ft_set_surname(std::string surname);
		void ft_set_nickname(std::string nickname);
		void ft_set_secret(std::string secret);
		std::string ft_get_name()const;	
		std::string ft_get_surname()const;
		std::string ft_get_nickname()const;
		std::string ft_get_secret()const;
		int ft_get_number()const;
};

#endif