/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:27:15 by ekose             #+#    #+#             */
/*   Updated: 2025/01/18 22:08:50 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
	try
	{
		Form form1 = Form("basic", 140, 140);
		Bureaucrat a = Bureaucrat("john",140);
		a.signForm(form1);
		Form ff(form1);
		std::cout << ff.getSign()<< "\n";
		Bureaucrat b = Bureaucrat("tiny",1);
		b.signForm(form1);
		
		Bureaucrat c ;
		Form form2 = Form("medium", 50,50);
		c.signForm(form2);
	}
	catch(std::exception &e){
		std::cout << e.what()<< "\n";
	}
}