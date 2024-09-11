/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:38:55 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:39:48 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){}

AMateria::AMateria(std::string type): type(type){}

AMateria::AMateria(const AMateria& copy) {
	this->type = copy.type;
}

AMateria::~AMateria(void){}

std::string const& AMateria::getType(void)const{
	return (this->type);
}

void AMateria::use(ICharacter& target){
	std::cout << "this material is used by the character " << target.getName() << std::endl;
}