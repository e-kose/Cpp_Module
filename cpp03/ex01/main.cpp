/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:54:07 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 19:27:24 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // ClapTrap örneği oluşturma ve testler
    ClapTrap claptrap("CT-1");

    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.attack("target2");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    claptrap.attack("target3");

    std::cout << std::endl;

    // ScavTrap örneği oluşturma ve testler
    ScavTrap scavtrap("ST-1");

    scavtrap.attack("target1");
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(20);
    scavtrap.guardGate();
    scavtrap.attack("target2");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(50);
    scavtrap.attack("target3");
    scavtrap.takeDamage(95);
    std::cout <<  scavtrap.getHitPoints()<< std::endl;
    scavtrap.takeDamage(4);

    std::cout << std::endl;
     
    ScavTrap scavtrap_2;
    scavtrap_2 = scavtrap;
    std::cout <<  scavtrap_2.getHitPoints()<< std::endl;
    std::cout << scavtrap_2.getEnergyPoint() << std::endl;
    std::cout << scavtrap_2.getAttackDamage() << std::endl;
    scavtrap_2.attack("target1");
    scavtrap_2.takeDamage(30);
    scavtrap_2.beRepaired(20);
    
    std::cout << std::endl;
    return 0;
}