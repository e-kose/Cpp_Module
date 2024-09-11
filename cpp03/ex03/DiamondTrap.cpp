/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:50:56 by ekose             #+#    #+#             */
/*   Updated: 2024/09/08 16:09:26 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :ClapTrap("Default_clap_name"){
	this->name = ("Default");
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
	std::cout << "Derived a new diamondTrap named " << this->name << " from scavTrap and FragTrap"
	<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name"){
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
	std::cout << "Derived a new diamondTrap named " << this->name << " from scavTrap and FragTrap"
	<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
	ClapTrap::operator=(src);
    ScavTrap::operator=(src);
    FragTrap::operator=(src);
	std::cout << "Diamond copy assignment operator called" << std::endl;
	if (this == &src) {
	   return (*this);
	}
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor called" << std::endl;
	std::cout << "DiamondTrap named  " << this->name << " from scavTrap and FragTrap, destroyed"
	<< std::endl;
}
void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}