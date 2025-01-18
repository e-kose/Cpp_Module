/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:29:06 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 19:18:18 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm(){
	throw std::runtime_error("You cannot create a ShrubberyCreationForm form without a target");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137),target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy){
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this != &src) {
		AForm::operator=(src);
	}
    this->target = src.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string ShrubberyCreationForm::getTarget()const{
	return this->target;
}

void ShrubberyCreationForm::action(void)const{
    std::ofstream fd;
	fd.open(target, std::ofstream::out);
    fd << "       _-_" << std::endl;
    fd << "    /~~   ~~\\" << std::endl;
    fd << " /~~         ~~\\" << std::endl;
    fd << "{               }" << std::endl;
    fd << " \\  _-     -_  /" << std::endl;
    fd << "   ~  \\\\ //  ~" << std::endl;
    fd << "_- -   | | _- _" << std::endl;
    fd << "  _ -  | |   -_" << std::endl;
    fd << "      // \\\\" << std::endl;
    
    fd.close();
}