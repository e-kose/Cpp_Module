/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:17:15 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:07:14 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void){
	std::cout << "WrongDog constructor called" << std::endl;
	this->setType("WrongDog");
	this->brain = new Brain();
}

WrongDog::WrongDog(const WrongDog& copy) {
	std::cout << "WrongDog copy constructor called" << std::endl;
	this->setType(copy.getType());
	this->brain = new Brain(*(copy.brain));
}

WrongDog& WrongDog::operator=(const WrongDog& src) {
	if (this == &src) {
	   return (*this);
	}
	WrongAnimal::operator=(src);
	this->setType(src.getType());
	delete this->brain;
	this->brain = new Brain(*(src.brain));
	return *this;
}

WrongDog::~WrongDog(){
	delete this->brain;
	std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound(void)const {
	std::cout << "Woof Woof" << std::endl;
}

Brain* WrongDog::getBrain(void) const {
        return this->brain;
}