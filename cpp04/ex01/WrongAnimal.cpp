/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:13:25 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:14:22 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	if (this == &src) {
	   return (*this);
	}
	this->type = src.getType();
	return *this;
}
WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor called" << std::endl;}

void WrongAnimal::makeSound(void)const {
	std::cout << "General WrongAnimal sound" << std::endl;
}

void WrongAnimal::setType(std::string type){
	this->type = type;
}

std::string WrongAnimal::getType(void)const{
	return (this->type);
}