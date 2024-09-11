/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:15:19 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:20:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "WrongCat constructor called" << std::endl;
	this->setType("WrongCat");
	this->brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& copy):WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->setType(copy.getType());
	this->brain = new Brain(*(copy.brain));
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this == &src) {
	   return (*this);
	}
	WrongAnimal::operator=(src);
	this->setType(src.getType());
	delete this->brain;
	this->brain = new Brain(*(src.brain));
	return *this;
}

WrongCat::~WrongCat(){
	delete this->brain;
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void)const {
	std::cout << "Meow Meow" << std::endl;
}

Brain* WrongCat::getBrain(void) const {
        return this->brain;
}