/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:50:18 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 17:57:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	    // ClapTrap örneği oluşturma ve testler
    // ClapTrap claptrap("CT-1");

    // claptrap.attack("target1");
    // claptrap.takeDamage(3);
    // claptrap.beRepaired(2);
    // claptrap.attack("target2");
    // claptrap.takeDamage(5);
    // claptrap.beRepaired(5);
    // claptrap.attack("target3");

    // std::cout << std::endl;

    // FragTrap örneği oluşturma ve testler
    FragTrap fragtrap("FT-1");

    fragtrap.attack("target1");
    fragtrap.takeDamage(30);
    fragtrap.beRepaired(20);
    fragtrap.attack("target2");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(50);
    fragtrap.attack("target3");
    
    std::cout << std::endl;
     
    FragTrap fragtrap_2(fragtrap);
    std::cout << fragtrap_2.getEnergyPoint() << std::endl;
    std::cout << fragtrap_2.getAttackDamage() << std::endl;
    fragtrap_2.attack("target1");
	fragtrap_2.highFivesGuys();
    fragtrap_2.takeDamage(30);
    fragtrap_2.beRepaired(20);
    
    std::cout << std::endl;
    return 0;
}