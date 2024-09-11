/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:08:20 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 14:33:44 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	{
		std::cout <<" ==========" << "Stacks zombies" << "================" << std::endl;
	
		randomChump("Clever");
		randomChump("Alice");
	}
	std::cout <<" ==========" << "Heaps zombies" << "================" << std::endl;
	Zombie *z1 = newZombie("Foo");
	Zombie *z2 = newZombie("Treex");
	
	z1->announce();
	z2->announce();

	delete(z1);
	delete(z2);
	
	
}
