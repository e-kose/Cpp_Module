/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:43:16 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 15:36:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
	this->name = name;
	for (int i = 0; i < 4; i++) {
		this->environment[i] = NULL; 
    }
}

Character::Character(const Character& copy){
	this->name = copy.getName();
	for(int i = 0; i < 4; i++) {
		if (copy.environment[i])
			this->environment[i] = copy.environment[i]->clone();
		else
			this->environment[i] = NULL;
	}
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
		
	this->name = src.getName();
	
	for (int i = 0; i < 4; i++) {
		if (this->environment[i])
			delete this->environment[i];
	}
	for (int i = 0; i < 4; i++) {
		if(src.environment[i])
			this->environment[i] = src.environment[i]->clone();
		else
			this->environment[i] = NULL;
	}
	return (*this);
}

Character::~Character(void){
	for (int i = 0 ; i < 4; i++){
		if (this->environment[i])
			delete this->environment[i];
	}
}

std::string const& Character::getName(void) const{
	return (this->name);
}

void Character::equip(AMateria* m){
	if(m == NULL)
		return;
	if (m->getType() == "ice" || m->getType() == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->environment[i] == NULL){	
				this->environment[i] = m;
				break;
			}
		}	
	}
}

void Character::unequip(int idx){
	
	if (idx >= 0 && idx < 4)
		this->environment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	
	if(idx >= 0 && idx < 4){
		
		if (this->environment[idx]){
			this->environment[idx]->use(target);
		}
		else{
			std::cout << "The character named " << target.getName() << " chose the"
			<< " empty slot" << std::endl;
		}
	}
}