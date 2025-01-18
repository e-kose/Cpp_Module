/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:31:26 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 19:51:42 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void){
	throw std::runtime_error("You cannot create a RobotomyRequestForm form without a target");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45),target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):AForm(copy){
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	if(this != &src)
		AForm::operator=(src);
	this->target = src.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string RobotomyRequestForm::getTarget()const{
	return this->target;
}

void RobotomyRequestForm::action()const{
	std::cout << "Drilling noises..." << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0) {
        std::cout << this->target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << this->target << " robotomy failed!" << std::endl;
    }
}