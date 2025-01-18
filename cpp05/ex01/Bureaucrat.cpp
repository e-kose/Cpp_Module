/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:40:08 by ekose             #+#    #+#             */
/*   Updated: 2025/01/17 16:23:50 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	throw std::runtime_error("An empty bureaucrat cannot be created");
}
Bureaucrat::Bureaucrat(const std::string _name, int _grade):_name(_name)
{
	if(_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = _grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy):_name(copy.getName())
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return *this;
	this->_grade = src.getGrade();
	return *this;
}
Bureaucrat::~Bureaucrat(){}

std::ostream & operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() <<", bureaucrat grade " << bureaucrat.getGrade(); 
	return os;
}

std::string Bureaucrat::getName()const
{
	return this->_name;
}

int Bureaucrat::getGrade()const
{
	return this->_grade;
}
const char* Bureaucrat::GradeTooHighException::what()const throw(){
	return "Grade is too high!\n";
}

const char* Bureaucrat::GradeTooLowException::what()const throw(){
	return "Grade is too low!\n";
}
void Bureaucrat::setGrade(int _grade)
{
	if(_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = _grade;
}
void Bureaucrat::gradeIncrement()
{

	if(this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::gradeDecrement()
{
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}
void Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
		std::cout << this->getName()<< " signed " << form.getName()<<"\n";
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName()
                  << " because " << e.what() << std::endl;
	}
}