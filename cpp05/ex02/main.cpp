/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:27:15 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 19:56:27 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	try
	{
		Bureaucrat tiny = Bureaucrat("tiny",145);
		ShrubberyCreationForm a = ShrubberyCreationForm("home");
		ShrubberyCreationForm home = a;
		std::cout << home.getExecuteGrade()<< "   " << home.getSignGrade()<<" "<< home.getSign()<<"\n";
		tiny.signForm(home);
		std::cout << home.getExecuteGrade()<< "   " << home.getSignGrade()<<" "<< home.getSign()<<"\n";
		tiny.executeForm(home);

		Bureaucrat frank = Bureaucrat("Frank", 137);
		frank.executeForm(home);

		Bureaucrat albert = Bureaucrat("albert", 44);
		RobotomyRequestForm robot = RobotomyRequestForm("robot");
		albert.signForm(robot);
		std::cout << "--------------------------\n";
		albert.executeForm(robot);
		std::cout << "--------------------------\n";

		Bureaucrat tom = Bureaucrat("tom", 70);
		PresidentialPardonForm kim = PresidentialPardonForm("Kim");
		tom.signForm(kim);
		tom.executeForm(kim);

	}
	catch(std::exception &e){
		std::cout << e.what()<< "\n";
	}
}