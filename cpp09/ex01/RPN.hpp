/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:30:00 by ekose             #+#    #+#             */
/*   Updated: 2025/01/29 18:22:36 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
class RPN{
	private:
		std::stack<int> stck;
	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& src);
		int calculate(const std::string& token);
		class ErrorException: public std::exception{
			virtual const char* what() const throw(); 
		};
		class DivisionByZero: public std::exception{
			virtual const char* what() const throw(); 
		};
};
#endif