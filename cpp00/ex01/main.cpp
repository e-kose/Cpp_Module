/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:55:43 by ekose             #+#    #+#             */
/*   Updated: 2024/08/25 16:24:45 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 		ph;
	std::string 	operation;
	bool 			run;
	run = true;
	while (run)
	{
		std::cout << "1-)ADD\n2-)SEARCH\n3-)EXIT\n->";
		std::getline(std::cin, operation);

		if (operation == "ADD")
			ph.ft_add();
		else if (operation == "SEARCH")
			ph.ft_search();
		else if (operation == "EXIT" || std::cin.eof())
			run = false;
		else
			std::cout << "Invalid command try again" << std::endl;
	}
}