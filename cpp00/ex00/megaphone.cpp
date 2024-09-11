/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:22 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:00:34 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **argv)
{
	int		i;
	
	argv++;
	if (ac >= 2)
	{
		while (*argv)
		{ 
			i = 0;
			while((*argv)[i])
			{
				std::cout << (char)std::toupper((*argv)[i]);
				i++;
			}
			argv++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}