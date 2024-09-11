/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:20:38 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:51:04 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombiHorde(int N, std::string name)
{
	int i = 0;
	Zombie *z1 = new Zombie[N];
	
	while (i < N)
	{
		z1[i].ft_set_name(name);
		i++;
	}
	return (z1);
}
