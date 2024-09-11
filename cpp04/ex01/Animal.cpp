/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:25:17 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:09:45 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):type("Animal"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& src) {
	if (this == &src) {
	   return (*this);
	}
	this->type = src.getType();
	return *this;
}
Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

void Animal::makeSound(void)const {
	std::cout << "General animal sound" << std::endl;
}

void Animal::setType(std::string type){
	this->type = type;
}

std::string Animal::getType(void)const{
	return (this->type);
}