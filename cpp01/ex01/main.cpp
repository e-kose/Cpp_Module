/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:39:13 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 14:52:25 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int size = 12;
	Zombie *z = zombiHorde(size,"Foo");
	for(int i= 0; i < size; i++)
		z[i].announce();
	size = 4;
	Zombie *z1 = zombiHorde(size,"Clay");
	for(int i = 0; i < size; i++)
		z1[i].announce();
	delete []z;
	delete []z1;
}
