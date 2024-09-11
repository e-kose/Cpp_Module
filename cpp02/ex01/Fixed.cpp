/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:35:17 by ekose             #+#    #+#             */
/*   Updated: 2024/09/03 19:30:34 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbOfFract = 8;

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->fixed = n << nbOfFract;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(n * (1 << nbOfFract));
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
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

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

float Fixed::toFloat(void)const{
	return (float) ((float)this->fixed / ((float)(1 << nbOfFract)));
}

int Fixed::toInt(void)const{
	return (int)(this->fixed / (1 << nbOfFract));
}

std::ostream &operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}