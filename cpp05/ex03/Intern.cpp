/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:40:50 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 23:15:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern& src) {
	if (this == &src) {
	   return (*this);
	}
	return *this;
}

Intern::~Intern(){}

AForm* Intern::makeForm(std::string formName, std::string target){
	AForm* (Intern::*complains[3]) (std::string target) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for(int i = 0; i < 3; i++){
		if (forms[i] == formName){
			return (this->*complains[i])(target);
		}
		throw Intern::FormNotFoundException();
	}
	return NULL;
}

AForm* Intern::createPresidential(std::string target){
	return (new PresidentialPardonForm(target));
}

AForm* Intern::createRobotomy(std::string target){
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createShrubbery(std::string target){
	return (new ShrubberyCreationForm(target));
}

const char*	Intern::FormNotFoundException::what() const throw() {
	return "Form not found!";
}