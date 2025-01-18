/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:23:10 by ekose             #+#    #+#             */
/*   Updated: 2025/01/17 16:35:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool 				_signed;
		const int			_signGrade;
		const int			_executeGrade;
	
	public:
		AForm();
		AForm(std::string _name, int _signGrade, int _executeGrade);
		AForm(const AForm &copy);
		virtual ~AForm();
		AForm& operator=(const AForm &src);
		class GradeTooHighException : public std::exception{
			virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			virtual const char * what() const throw();
		};
		class FormNotSignedException : public std::exception {
        	virtual const char * what() const throw();
        };
		std::string 	getName()const;
		bool			getSign()const;
		int				getSignGrade()const;
		int				getExecuteGrade()const;
		void			beSigned(const Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const & executor)const;
		virtual	void	action(void)const = 0;
};
std::ostream &operator<<(std::ostream &os, const AForm &AForm);
# endif