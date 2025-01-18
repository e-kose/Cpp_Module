/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:59:37 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 19:55:11 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void){
	throw std::runtime_error("You cannot create a PresidentialPardonForm form without a target");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5),target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):AForm(copy){
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	if(this != &src)
		AForm::operator=(src);
	this->target = src.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string PresidentialPardonForm::getTarget()const{
	return this->target;
}

void PresidentialPardonForm::action()const{
	std::cout << "Informs that " <<this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}