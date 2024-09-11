/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:06:04 by ekose             #+#    #+#             */
/*   Updated: 2024/09/08 16:10:32 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    // DiamondTrap oluşturma
    DiamondTrap diamond1("Diamond1");
    diamond1.attack("enemy1");
    diamond1.highFivesGuys();
    diamond1.whoAmI();
    std::cout << std::endl;
    
    // Kopya kurucu kullanarak yeni bir DiamondTrap oluşturma
    // DiamondTrap diamond2(diamond1);
    // diamond2.attack("enemy2");
    // diamond2.highFivesGuys();
    // diamond2.whoAmI();
    // std::cout << std::endl;
    
    // // Kopya atama operatörü kullanarak atama
    // DiamondTrap diamond3;
    // diamond3 = diamond1;
    // diamond3.attack("enemy3");
    // diamond3.highFivesGuys();
    // diamond3.whoAmI();
    // std::cout << std::endl;

    return 0;
}
