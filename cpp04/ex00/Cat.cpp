/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:47:06 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:07:08 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->setType("Cat");
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat& copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& src) {
	if (this == &src) {
	   return (*this);
	}
	Animal::operator=(src);
	this->setType(src.getType());
	return *this;
}

Cat::~Cat(){std::cout << "Cat destructor called" << std::endl;}

void Cat::makeSound(void)const{
	std::cout << "Meow Meow" << std::endl;
}