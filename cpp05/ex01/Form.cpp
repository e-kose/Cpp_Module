/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:23:02 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 22:09:05 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_signGrade(0) ,_executeGrade(0){
	
	throw std::runtime_error("Cannot create an empty form");
	
}

Form::Form(std::string _name, int _signGrade, int _executeGrade)
: _name(_name), _signGrade(_signGrade), _executeGrade(_executeGrade) {
	this->_signed = false;
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy):_name(copy.getName()),_signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade()){
	*this = copy;
}

Form& Form::operator=(const Form& src) {
	if (this == &src) {
	   return (*this);
	}
	this->_signed = src._signed;
	return *this;
}

Form::~Form(){}

std::string Form::getName()const{
	return this->_name;
}

int Form::getExecuteGrade()const{
	return this->_executeGrade;
}

int Form::getSignGrade()const{
	return this->_signGrade;
}

bool Form::getSign()const{
	return this->_signed;
}

std::ostream &operator<<(std::ostream &os, const Form &form){
	os << form.getName() <<", form signed: " << form.getSign() 
	<< ", form sign grade: "<< form.getSignGrade() << ", form execute grade: " << form.getExecuteGrade();
	return os; 
}

void Form::beSigned(const Bureaucrat &bureaucrat){
	if(this->_signGrade >= bureaucrat.getGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what()const throw(){
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what()const throw(){
	return "Grade is too low!";
}