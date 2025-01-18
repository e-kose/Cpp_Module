/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:27:15 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 23:35:48 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){
	try
	{
		Intern intern1 = Intern();
		Bureaucrat tim = Bureaucrat("Tim",140);
		PresidentialPardonForm* form1 = (PresidentialPardonForm *)intern1.makeForm("PresidentialPardonForm","Kim");
		
		tim.signForm(*form1);
		tim.executeForm(*form1);

		PresidentialPardonForm* form2 = (PresidentialPardonForm *)intern1.makeForm("Empyt form","Kim");
		
		tim.signForm(*form2);

		delete form1;

	}
	catch(std::exception &e){
		std::cout << e.what()<< "\n";
	}
}