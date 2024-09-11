/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:52:39 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:54:32 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"){}

Ice::Ice(const Ice& copy): AMateria(copy){}

Ice& Ice::operator=(const Ice& src) {
	(void)src;
	return *this;
}
Ice::~Ice(void){}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
AMateria* Ice::clone(void)const{
	return (new Ice(*this));
}