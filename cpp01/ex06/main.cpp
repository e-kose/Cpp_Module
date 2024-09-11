/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:31:03 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 13:00:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **argv)
{
	if(ac == 2)
	{
		void (Harl::*ptr)(std::string) = (&Harl::complain);
		Harl object;
		(object.*ptr) (argv[1]);	
	}
	else
	{
		void (Harl::*ptr)(std::string) = &Harl::complain;
		Harl object;
		(object.*ptr) ("Default Message");
	}
	return 0;
}
