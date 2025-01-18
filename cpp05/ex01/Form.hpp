/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:23:10 by ekose             #+#    #+#             */
/*   Updated: 2025/01/17 16:35:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool 				_signed;
		const int			_signGrade;
		const int			_executeGrade;
	
	public:
		Form();
		Form(std::string _name, int _signGrade, int _executeGrade);
		Form(const Form &copy);
		~Form();
		Form& operator=(const Form &src);
		class GradeTooHighException : public std::exception{
			virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			virtual const char * what() const throw();
		};
		std::string getName()const;
		bool		getSign()const;
		int			getSignGrade()const;
		int			getExecuteGrade()const;
		void		beSigned(const Bureaucrat &bureaucrat);
};
std::ostream &operator<<(std::ostream &os, const Form &form);
# endif