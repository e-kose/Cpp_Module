/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:16:22 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:51:00 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->Name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->Name << " is dead :( :(" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::ft_set_name(std::string name)
{
	this->Name = name;
}
