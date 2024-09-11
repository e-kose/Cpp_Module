/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:57:26 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:20:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy):Animal(copy){
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(copy.getType());
    this->brain = new Brain(*(copy.brain));
}

Dog& Dog::operator=(const Dog& src)
{
	if (this == &src)
		return (*this);
	Animal::operator=(src);
	this->type = src.getType();
	delete this->brain;
	this->brain = new Brain(*(src.brain));
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void)const{
	std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain(void) const {
        return this->brain;
}