/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:47:06 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:05:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat& copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(copy.getType());
	this->brain = new Brain(*(copy.brain));
}

Cat& Cat::operator=(const Cat& src) {
	if (this == &src) {
	   return (*this);
	}
	Animal::operator=(src);
	this->setType(src.getType());
	delete this->brain;
	this->brain = new Brain(*(src.brain));
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void)const{
	std::cout << "Meow Meow" << std::endl;
}

Brain* Cat::getBrain(void) const {
        return this->brain;
}