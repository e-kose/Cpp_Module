/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:29:52 by ekose             #+#    #+#             */
/*   Updated: 2025/01/29 18:34:52 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN& copy) {
	*this = copy;
}

RPN& RPN::operator=(const RPN& src) {
	if (this == &src) {
	   return (*this);
	}
	this->stck = src.stck;
	return *this;
}

RPN::~RPN(){}


int RPN::calculate(const std::string& str){
	
	std::stringstream s1(str);
	std::string token;
	if(str == "")
		throw RPN::ErrorException();
	
	while(s1 >> token){
		if(isdigit(token[0]) || (token.length() > 1 && token[0] == '-'))
			stck.push(atoi(token.c_str()));
		else if (token == "+" || token == "-" || token == "*" || token == "/"){
			if (stck.size() < 2)
				throw RPN::ErrorException();
			
			int num1 = stck.top();
			stck.pop();
			int num2 = stck.top();
			stck.pop();
			int result = 0;
			if(token == "+") 
				result = num2 + num1;
			else if(token == "-")
				result = num2 - num1;
			else if(token == "*")
				result = num2 * num1;
			else{
				if(num1 == 0)
					throw RPN::DivisionByZero();
				result = num2 / num1;
			}
			stck.push(result);
		}
		else
			throw RPN::ErrorException();

	}
	if(stck.size() != 1)
		throw RPN::ErrorException();
	return stck.top();
}

const char* RPN::ErrorException::what()const throw(){
	return "Error";
}

const char* RPN::DivisionByZero::what()const throw(){
	return "No division by zero";
}