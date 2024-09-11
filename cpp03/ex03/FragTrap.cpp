/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:05:57 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 19:21:57 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	std::cout << "Derived a new fragtrap named " << this->name << " from claptrap"
	<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	std::cout << "Derived a new fragtrap named " << this->name << " from claptrap"
	<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& src){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	ClapTrap::operator=(src);
	if (this == &src)
		return (*this);
	this->name = src.name;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;
	this->attackDamage = src.attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
	std::cout << "FragTrap named  " << this->name << " from claptrap, destroyed"
	<< std::endl;
}

void FragTrap::highFivesGuys(void){
	if (this->hitPoints > 0)
		std::cout << "FragTrap " << this->name << " is requesting a high five!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " can't ask for a high five because his hitpoints are 0" << std::endl;
}