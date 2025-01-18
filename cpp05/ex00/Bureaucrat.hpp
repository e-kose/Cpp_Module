/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:03:28 by ekose             #+#    #+#             */
/*   Updated: 2025/01/16 21:28:04 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &src);
		std::string getName()const;
		int			getGrade()const;
		void 		setGrade(int _grade);
		void gradeIncrement();
		void gradeDecrement();
		class GradeTooHighException :public std::exception{
			public:
				virtual const char *what() const throw(); 
		};
		class GradeTooLowException :public std::exception{
			public:
				virtual const char *what() const throw(); 
		};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
# endif