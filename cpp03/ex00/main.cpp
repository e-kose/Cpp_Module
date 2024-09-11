/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:05:00 by ekose             #+#    #+#             */
/*   Updated: 2024/09/09 12:52:05 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap claptrap("CT-1");

	claptrap.setAttackDamage(5);
    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.attack("target2");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    claptrap.attack("target3");
    claptrap.takeDamage(10);
    claptrap.takeDamage(2);
    claptrap.beRepaired(3);
    claptrap.takeDamage(2);
    std::cout << claptrap.getHitPoints() << std::endl;
    claptrap.beRepaired(4);
    std::cout << claptrap.getHitPoints() << std::endl;
    
    return 0;
}
