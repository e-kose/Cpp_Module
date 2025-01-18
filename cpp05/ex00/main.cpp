/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 21:13:24 by ekose             #+#    #+#             */
/*   Updated: 2025/01/17 15:44:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try{
		// Bureaucrat b = Bureaucrat("john", 151);
		// std::cout<<b << std::endl;
		// std::cout << b.getName();
		// Bureaucrat c = Bureaucrat("frank",0);
		// std::cout<<c << std::endl;
		Bureaucrat c = Bureaucrat("Tiny", 1);
		// c.gradeDecrement();
		Bureaucrat d = Bureaucrat("john", 150);
		std::cout<<d << std::endl;
		// d.gradeIncrement();
		// std::cout<<d << std::endl;
		// d.setGrade(155);
	
		Bureaucrat a(d);
		std::cout<< a << std::endl;
		a = c;
		std::cout<< a << std::endl;


	}
	catch(std::exception &e){
		std::cout<<e.what() << "\n";
	}
}