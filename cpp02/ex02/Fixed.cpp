/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:04:36 by ekose             #+#    #+#             */
/*   Updated: 2024/09/04 19:03:46 by ekose            ###   ########.fr       */
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
	std::cout << "Float constructor called" <<std::endl;
	this->fixed = (int)roundf(n * (1 << nbOfFract));
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->fixed = src.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

int Fixed::toInt(void)const{
	return (this->fixed >> nbOfFract);
}

float Fixed::toFloat(void)const{
	return (float)((float)this->fixed / (float)(1 << nbOfFract));
}

std::ostream& operator <<(std::ostream& output, const Fixed& fixed){
	output << fixed.toFloat();
	return (output);
}

//Boolean operator overload
bool Fixed::operator<(const Fixed& other)const{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator >(const Fixed& other)const{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator <=(const Fixed& other)const{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator >=(const Fixed& other)const{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator ==(const Fixed& other)const{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator !=(const Fixed& other)const{
	return (this->toFloat() != other.toFloat());
}

//Arithmatic operator overload
Fixed Fixed::operator +(const Fixed& other)const{
	
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator -(const Fixed& other)const{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator *(const Fixed& other)const{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator /(const Fixed& other)const{
	return Fixed(this->toFloat() / other.toFloat());
}

//Increment/decrement operators overload
Fixed& Fixed::operator ++(void){ //pre increment
	++this->fixed;
	return *this;
}

Fixed Fixed::operator ++(int){ //post increment
	Fixed temp(*this);
	this->fixed++;
	return (temp);
}

Fixed& Fixed::operator --(void){
	--this->fixed;
	return *this;
}

Fixed Fixed::operator --(int){
	Fixed temp(*this);
	this->fixed--;
	return (temp);
}

//Min max overload
const Fixed& Fixed::min(const Fixed& first, const Fixed& second){
	if (first.toFloat() < second.toFloat())
		return first;
	else 
		return second;
}

Fixed& Fixed::min(Fixed& first, Fixed& second){
	if (first.toFloat() < second.toFloat())
		return first;
	else 
		return second;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second){
	if (first.toFloat() > second.toFloat())
		return first;
	else 
		return second;
}

Fixed& Fixed::max(Fixed& first, Fixed& second){
	if (first.toFloat() > second.toFloat())
		return first;
	else 
		return second;
}