/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:15:41 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 15:48:33 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name){
	std::cout << "ClapTrap " << this->name << " created." << std::endl;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std::cout << "Copy assigment operator overloded" << std::endl;
	if (this == &src) {
	   return (*this);
	}
	this->name = src.name;
	this->attackDamage = src.attackDamage;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;
	return *this;
}

ClapTrap::~ClapTrap(void){std::cout << "ClapTrap " << name << " destroyed." << std::endl;}

void ClapTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "Claptrap " << this->name << " attacks " << target << " causing " << this->attackDamage
		<< " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if(this->energyPoints == 0)
		std::cout << "ClapTrap has not energy point" << std::endl;
	else
		std::cout << "ClapTrap has not hit point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0)
		return void(std::cout << "ClapTrap " << this->name << " has not hit point" << std::endl);
	if (amount >= (unsigned int )this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	 std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	
	 if (energyPoints > 0) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
        energyPoints--;
    }
	else 
		std::cout << "ClapTrap " << name << " could not renew itself because it has no energy" << std::endl;
		
	
}

void ClapTrap::setAttackDamage(int damage){
	this->attackDamage = damage;
}

int	ClapTrap::getAttackDamage(void)const{
	return (this->attackDamage);
}

void ClapTrap::setEnergyPoint(int energyPoint){
	this->energyPoints = energyPoint;
}
int ClapTrap::getEnergyPoint(void)const{
	return (this->energyPoints);
}

void ClapTrap::setHitPoints(int hitPoint){
	this->hitPoints = hitPoint;
}
int ClapTrap::getHitPoints(void)const{
	return (this->hitPoints);
}
