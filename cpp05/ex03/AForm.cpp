/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:23:02 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 18:27:00 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_signGrade(0) ,_executeGrade(0){}

AForm::AForm(std::string _name, int _signGrade, int _executeGrade)
: _name(_name), _signGrade(_signGrade), _executeGrade(_executeGrade) {
	this->_signed = false;
	if (_signGrade < 1 || _executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy):_name(copy.getName()),_signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade()){
	*this = copy;
}

AForm& AForm::operator=(const AForm& src) {
	if (this == &src) {
	   return (*this);
	}
	this->_signed = src._signed;
	return *this;
}

AForm::~AForm(){}

std::string AForm::getName()const{
	return this->_name;
}

int AForm::getExecuteGrade()const{
	return this->_executeGrade;
}

int AForm::getSignGrade()const{
	return this->_signGrade;
}

bool AForm::getSign()const{
	return this->_signed;
}

std::ostream &operator<<(std::ostream &os, const AForm &AFormform){
	os << AFormform.getName() <<", AFormform signed: " << AFormform.getSign() 
	<< ", AFormform sign grade: "<< AFormform.getSignGrade() << ", AFormform execute grade: " << AFormform.getExecuteGrade();
	return os; 
}

void AForm::beSigned(const Bureaucrat &bureaucrat){
	if(this->_signGrade >= bureaucrat.getGrade())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what()const throw(){
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what()const throw(){
	return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what()const throw(){
	return "Form has not been signed!";
}

void AForm::execute(Bureaucrat const& executor)const{
	if(this->_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_executeGrade)
		throw AForm::GradeTooLowException();
	this->action();
}

