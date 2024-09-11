/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:48:18 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:50:46 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): Name(name)
{
	return ;
}
Zombie::~Zombie(void)
{
	std::cout << this->Name << " is dead :( :(" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
