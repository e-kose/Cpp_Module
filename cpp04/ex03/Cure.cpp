/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:16:24 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 17:30:53 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){}

Cure::Cure(const Cure& copy) :AMateria(copy){}

Cure& Cure::operator=(const Cure& src) {
	(void)src;
	return *this;
}

Cure::~Cure(void){}

void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone(void)const{
	
	return (new Cure(*this));
}