/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:17:15 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:17:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void){
	std::cout << "WrongDog constructor called" << std::endl;
	this->setType("WrongDog");
}

WrongDog::WrongDog(const WrongDog& copy) :WrongAnimal(copy){
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = copy;
}

WrongDog& WrongDog::operator=(const WrongDog& src) {
	if (this == &src) {
	   return (*this);
	}
	WrongAnimal::operator=(src);
	this->setType(src.getType());
	return *this;
}

WrongDog::~WrongDog(){std::cout << "WrongDog destructor called" << std::endl;}

void WrongDog::makeSound(void)const {
	std::cout << "Woof Woof" << std::endl;
}