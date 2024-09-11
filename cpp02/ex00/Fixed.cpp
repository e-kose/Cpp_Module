/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:37:28 by ekose             #+#    #+#             */
/*   Updated: 2024/09/03 15:11:19 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbOfFract = 8;

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->fixed = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}
int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}
