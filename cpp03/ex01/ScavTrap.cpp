/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:14:21 by ekose             #+#    #+#             */
/*   Updated: 2024/09/09 13:23:33 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
	std::cout << "Derived a new scavtrap named " << this->name << " from claptrap"
	<< std::endl;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& copy) :ClapTrap(copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	ClapTrap::operator=(src);
	if (this == &src) {
	   return (*this);
	}
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
	std::cout << "Scavtrap named  " << this->name << " from claptrap, destroyed"
	<< std::endl;
}
void ScavTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "Scavtrap " << this->name << " attacks " << target << " causing " << this->attackDamage
		<< " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if(this->energyPoints == 0)
		std::cout << "ScavTrap has not energy point" << std::endl;
	else
		std::cout << "ScavTrap has not hit point" << std::endl;
}
void ScavTrap::guardGate(void){
	if(this->hitPoints > 0)
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap cannot switch to gatekeeper mode because its hitpoint is 0" << std::endl;
}