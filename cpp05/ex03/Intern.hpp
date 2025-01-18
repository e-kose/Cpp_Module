/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:30:14 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 23:12:59 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	private:
		AForm* createPresidential(std::string target);
		AForm* createRobotomy(std::string target);
		AForm* createShrubbery(std::string target);

	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern& operator=(const Intern &src);
		AForm* makeForm(std::string formName, std::string target);
		class FormNotFoundException: public std::exception {
			virtual const char*	what() const throw();
		};
};
#endif